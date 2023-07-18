from std_msgs.msg import String
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from pers_msgs.msg import NewUsermsg
from cv_bridge import CvBridge

import telebot
from telebot.types import ReplyKeyboardMarkup, ForceReply, ReplyKeyboardRemove
import time
import os
import threading
import cv2

TELEGRAM_TOKEN = '6297274661:AAENxh-QOD5rfevbHUe1gWhqGmljzeJMCbY'
CHAT_ID = 761096513
bot = telebot.TeleBot(TELEGRAM_TOKEN)

class TelegramNode(Node):
    def __init__(self):
        super().__init__('telegram_node')
        self.create_user_publisher = self.create_publisher(NewUsermsg, '/new_user_bot', 10)
        self.delete_user_publisher = self.create_publisher(String, '/delete_user_bot', 10)

        self.bridge = CvBridge()

        self.bot = bot
        self.bot.message_handler(commands=["start", "help", "help"])(self.cmd_start)
        self.bot.message_handler(commands=["register_user"])(self.cmd_register_user)
        self.bot.message_handler(commands=["show_users"])(self.cmd_show_users)
        self.bot.message_handler(commands=["delete_user"])(self.cmd_ask_if_delete_user)
        self.bot.message_handler(commands=["delete_all_users"])(self.cmd_ask_if_delete_all_users)
        self.bot.message_handler(commands=["terminate", "stop", "stop"])(self.cmd_stop)
        self.users = {}
        self.new_user_msg = NewUsermsg()

    def cmd_start(self, message):
        markup = ReplyKeyboardRemove()
        self.bot.send_message(message.chat.id, "Hi! I'm a bot that will send you an image every time the bot detects someone with a bad emotion. \n" +
                 "You can also use the following commands: \n" + 
                 "- /register_user: Register a new user in the system. You will need an image of the user, his first and last name. \n" +
                 " - /delete_user: Deletes a user from the system. You will need the user's first and last name.\n" + 
                 " - /delete_all_users: Deletes a user from the system. \n" +
                 " - /delete_all_users: CAUTION, this command will delete ALL users from the system. This command is not displayed on the keyboard keypad to avoid accidental keystrokes.\n "+ 
                 " - /delete_all_users: CAUTION, this command will remove ALL users from the system.\n" +
                 " - /show_users: Lists all registered users in the system.\n "+
                 " - /view_log: Shows the log of warnings of one or all users. You will need the user's name and surname or leave it blank to see the one of all users.\n"+
                 " - /end, /stop /stop: Terminates the bot, this command is not displayed on the keyboard keypad to avoid accidental keystrokes.", reply_markup=markup)

    def cmd_register_user(self, message):
        markup = ForceReply()
        msg = self.bot.send_message(message.chat.id, "Send the user's image, first name and last name. If you want to cancel this process, type \"cancel\"", reply_markup=markup)
        self.bot.register_next_step_handler(msg, self.process_register_user)

    def process_register_user(self, message):
        all_ok = False
        markup = ForceReply()
        if message.text and message.text.lower() == "cancel":
            self.bot.send_message(message.chat.id, "Process canceled.")
        else:
            try:
                if message.photo and message.caption:
                    if message.caption in self.users:
                        self.bot.send_message(message.chat.id, "The user " + message.caption + " is already logged into the system.")
                    else:    
                        fileID = message.photo[-1].file_id
                        file_info = self.bot.get_file(fileID)
                        downloaded_file = self.bot.download_file(file_info.file_path)
                        file_name = "image" + str(time.time()) + ".jpg"
                        with open(file_name, 'wb') as new_file:
                            new_file.write(downloaded_file)
                        photo = cv2.imread(file_name)
                        name = message.caption
                        self.users[name] = downloaded_file

                        # Here you can post the message in the topic
                        image_msg = self.bridge.cv2_to_imgmsg(photo, "rgb8")
                        self.new_user_msg.frame = image_msg
                        self.new_user_msg.name = name
                        self.create_user_publisher.publish(self.new_user_msg)
                        photo = open(file_name, "rb")
                        self.bot.send_photo(message.chat.id, photo, caption="Name: " + name)
                        photo.close()
                        self.bot.send_message(message.chat.id, "User successfully registered.")
                        os.remove(file_name)
                        all_ok = True
                else:
                    msg = self.bot.send_message(message.chat.id, "Please send a picture and make sure to type first and last name.", reply_markup=markup)
                    self.bot.register_next_step_handler(msg, self.process_register_user)

            except Exception as e:
                print(e)
                self.bot.send_message(message.chat.id, "An error occurred while processing your request.")

        if all_ok:
            markup = ReplyKeyboardMarkup(one_time_keyboard=True,
                                        input_field_placeholder='Choose an option',
                                        resize_keyboard=True)
            markup.add('Yes', 'No')
            msg = self.bot.send_message(message.chat.id, "Do you want to register another user?", reply_markup=markup)
            self.bot.register_next_step_handler(msg, self.ask_if_new_user)

    def ask_if_new_user(self, message):
        if message.text == 'Yes':
            markup = ForceReply()
            msg = self.bot.send_message(message.chat.id, "Send the user's image, first name and last name. If you want to cancel this process, type \"cancel\"", reply_markup=markup)
            self.bot.register_next_step_handler(msg, self.process_register_user)
        elif message.text == 'No':
            markup = ReplyKeyboardRemove()
            self.bot.send_message(message.chat.id, "Process finished.", reply_markup=markup)

    def cmd_show_users(self, message):
        self.bot.send_message(message.chat.id, "Here are the registered users:")
        for user in self.users:
            file_name = "image" + str(time.time()) + ".jpg"
            with open(file_name, 'wb') as new_file:
                new_file.write(self.users[user])
            photo = open(file_name, "rb")
            self.bot.send_photo(message.chat.id, photo, caption="Name: " + user)
            photo.close()
            os.remove(file_name)
        self.bot.send_message(message.chat.id, "In total there are " + str(len(self.users)) + " registered users.")

    def cmd_ask_if_delete_user(self, message):
        markup = ForceReply()
        msg = self.bot.send_message(message.chat.id, "Enter the first and last name of the user you want to delete, please note that it has to be written as it was saved at the time. If you have any doubts you can use the /show_users command to see all registered users.", reply_markup=markup)
        self.bot.register_next_step_handler(msg, self.delete_user)

    def delete_user(self, message):
        if message.text in self.users:
            file_name = "image" + str(time.time()) + ".jpg"
            with open(file_name, 'wb') as new_file:
                new_file.write(self.users[message.text])
            photo = open(file_name, "rb")
            markup = ReplyKeyboardMarkup(one_time_keyboard=True, input_field_placeholder='Choose an option', resize_keyboard=True)
            markup.add('Yes', 'No')
            msg = self.bot.send_photo(message.chat.id, photo, caption="Name: " + message.text + "Do you want to delete this user?", reply_markup=markup)
            self.bot.register_next_step_handler(msg, self.delete_confirmed_user, message.text)
            photo.close()
            os.remove(file_name)
        else:
            self.bot.send_message(message.chat.id, "No user exists with that first and last name.")

    def delete_user_confirmed(self, message, name):
        if message.text == 'Yes':
            self.delete_user_publisher.publish(name)
            self.users.pop(name)
            self.bot.send_message(message.chat.id, "User successfully deleted.")
            print("User successfully deleted.")
        elif message.text == 'No':
            'No'. self.bot.send_message(message.chat.id, "Process completed.")

    def cmd_ask_if_delete_all_users(self, message):
        markup = ReplyKeyboardMarkup(one_time_keyboard=True, input_field_placeholder='Choose an option', resize_keyboard=True)
        markup.add('Yes', 'No')
        msg = self.bot.send_message(message.chat.id, "Do you want to delete ALL users?", reply_markup=markup)
        self.bot.register_next_step_handler(msg, self.delete_all_users)

    def delete_all_users(self, message):
        if message.text == 'Yes':
            names = self.users.keys()
            for name in names:
                self.delete_user_publisher.publish(name)
            self.users.clear()
            self.bot.send_message(message.chat.id, "All users have been deleted.")
            print("All users have been deleted.")
        elif message.text == 'No':
            self.bot.send_message(message.chat.id, "Process completed.")

    def cmd_stop(self, message):
        self.bot.reply_to(message, "Bot finished.")
        self.bot.stop_polling()

def receive_messages():
    # infinite loop to receive messages.
    print("Starting bot...")
    bot.set_my_commands([
        telebot.types.BotCommand("start", "It will give you the information of all currently available commands."),
        telebot.types.BotCommand("register_user", "Registers a new user in the system. You will need an image of the user, their first and last name."),
        telebot.types.BotCommand("delete_user", "Deletes a user from the system. You will need the user's first and last name."),
        telebot.types.BotCommand("show_users", "Lists all registered users in the system."),
        telebot.types.BotCommand("view_log", "Displays the alert log for one or all users. You will need the user's first and last name or leave it blank to view the one for all users.")
    ])
    bot.infinity_polling() # We start the bot


def main(args=None):
    rclpy.init(args=args)
    thread_bot = threading.Thread(name="thread_bot" ,target=receive_messages,) # Create a thread for the bot
    thread_bot.start() # Start the bot's thread
    node = TelegramNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
