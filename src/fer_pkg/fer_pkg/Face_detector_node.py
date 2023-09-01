#!/usr/bin/env python3
import os
import time
import rclpy
import face_recognition
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from pers_msgs.msg import Facemsg
from pers_msgs.msg import NewUsermsg
from cv_bridge import CvBridge
import cv2
import PIL
from PIL import ImageFont, ImageDraw
import telebot

TELEGRAM_TOKEN = 'YOUR TOKEN'
CHAT_ID = 761096513

def is_image_blurry(image):
    """
    Checks if an image is blurry based on the variance of the Laplacian.

    Args:
        image: Image in BGR format.

    Returns:
        bool: True if the image is blurred, False otherwise.
    """
    # Convert image to grayscale.
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    # Calculate the Laplacian variance
    laplacian_var = cv2.Laplacian(gray, cv2.CV_64F).var()

    # If the Laplacian variance is less than a threshold, we consider the image as blurred
    threshold = 160
    if laplacian_var < threshold:
        return True
    else:
        return False

class Face_detector_node(Node):
    def __init__(self):
        super().__init__('face_detector')
        print("Starting... In a moment face detection will start...")

        # Image publishing configuration
        self.publisher_img = self.create_publisher(Facemsg, '/face', 10)
        self.subscription_img = self.create_subscription(Image, '/image_raw', self.timer_callback, 10)


        # timer configuration for image processing
        # timer_period = 0.1 # time in seconds
        # self.timer = self.create_timer(timer_period, self.timer_callback)

        # subscriptions configuration
        self.subscription_new_user = self.create_subscription(
            NewUsermsg, '/new_user_bot', self.create_callback, 10)
        self.subscription_delete_user = self.create_subscription(
            String, '/delete_user_bot', self.delete_callback, 10)

        # Bridge configuration to convert between ROS and OpenCV
        self.bridge = CvBridge()

        # Video capture configuration
        # self.cap = cv2.VideoCapture(2)

        # Face recognition configuration
        package_path = os.path.dirname(os.path.abspath(__file__))
        
        # Load a sample picture and learn how to recognize it.z
        '''person1_path = os.path.join(package_path, 'Yo.jpg')
        person1_image = face_recognition.load_image_file(person1_path)
        person1_face_encoding = face_recognition.face_encodings(person1_image)[0]'''
        
        # Create arrays of known face encodings and their names
        #self.known_face_encodings = [person1_face_encoding]
        #self.known_face_names = ["Jesús Villén"]
        self.known_face_encodings = []
        self.known_face_names = []

        # Variables to store the face detection results.
        self.face_locations = []
        self.face_encodings = []
        self.face_names = []
        self.process_this_frame = True
        self.message = Facemsg()

        # Font to be able to add accents to the text
        self.fontpath = os.path.join(package_path, 'Roboto-Light.ttf')
        self.font = ImageFont.truetype(self.fontpath, 12)

        # Telegram bot configuration
        self.bot = telebot.TeleBot(TELEGRAM_TOKEN)

        # Variables for bad emotions warning
        self.last_warning = 0
        self.warning = False

        print("Posting... \nCtrl + c to end.")

    def timer_callback(self, msg):
        """
        Callback for the timer that processes the video images.
        """
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # time_start = time.time()

        # For each frame initialize the number of unknown faces to 0
        nfaces_unkn = 0

        # One frame is processed if one is not to be more efficient
        if self.process_this_frame:
        
            # BGR color image (which uses OpenCV) is converted to RGB color (which uses face_recognition).
            rgb_small_frame = frame[:, :, ::-1]

            # The locations of the faces are found and encoded.
            self.face_locations = face_recognition.face_locations(rgb_small_frame, 2)
            self.face_encodings = face_recognition.face_encodings(rgb_small_frame, self.face_locations)
            self.face_names = []

            # time_facedetected = time.time()

            # Time it takes for the robot to detect all faces
            # with open("face_detection_elapsed_time.txt", "a") as file:
            #     line = str((time_facedetected - time_start) * 1000) + ". \n"
            #     file.write(line)


            # time_start_before = time.time()
            # The found faces are traversed
            for self.face_encoding in self.face_encodings:

                # time_start = time.time()

                # Compares the found face with the known faces
                matches = face_recognition.compare_faces(self.known_face_encodings, self.face_encoding)
                
                name = "Unknown"

                # The distance between the found face and the known faces is calculated.
                face_distances = face_recognition.face_distance(self.known_face_encodings, self.face_encoding)

                # The index of the known face with the smallest distance is obtained.
                best_match_index = np.argmin(face_distances)

                # If the face found matches any of the known faces, its name is obtained.
                if matches[best_match_index]:
                    name = self.known_face_names[best_match_index]

                # # time_facedetected = time.time()

                # Time it takes for the robot to recognize a single face
                # with open("one_face_recognition_elapsed_time.txt", "a") as file:
                #     line = str((time_facedetected - time_start) * 1000) + ". \n"
                #     file.write(line)
                
                # If the found face does not match any of the known faces, the number of unknown faces is incremented.
                if name == "Unknown":
                    nfaces_unkn += 1

                # The name of the found face is added to the list of names.
                self.face_names.append(name)
            
            # time_finish = time.time()
            # Time it takes for the robot to recognize all faces
            # with open("complete_face_recognition_elapsed_time.txt", "a") as file:
            #         line = str((time_finish - time_start_before) * 1000) + ". \n"
            #         file.write(line)
        self.process_this_frame = not self.process_this_frame

        # Custom message is prepared for each found face
        faces = []
        msg_top = []
        msg_right = []
        msg_bottom = []
        msg_left = []

        time_start = time.time()

        # The found faces are traversed
        for (top, right, bottom, left), name in zip(self.face_locations, self.face_names):
            facecv = frame[top:bottom, left:right]
            face_filter = face_recognition.face_locations(facecv)
            if(face_filter):
                face = self.bridge.cv2_to_imgmsg(facecv, "rgb8")
                faces.append(face)
                msg_top.append(top)
                msg_right.append(right)
                msg_bottom.append(bottom)
                msg_left.append(left)

                # If the found face is unknown, a warning message is sent by telegram
                if (name == 'Unknown' and (time.time() - self.last_warning) >= 30) and (not is_image_blurry(facecv)):
                    print("I have seen someone I don't know")
                    # Save the image locally
                    cv2.imwrite('image.jpg', facecv)

                    # Load the saved image
                    photo = open('image.jpg', 'rb')

                    # Register a new user in the system
                    self.bot.send_photo(CHAT_ID, photo, caption='Hello! I think I\'ve seen someone I don\'t know, maybe it\'s the first time I\'ve seen them or maybe it was my fault... \n Please, if it\'s someone new, could you use the /register_user command so that the next time I see him, I recognize him?') # Send image

                    # Close the photo
                    photo.close()

                    # Remove the local image
                    os.remove('image.jpg')

                    self.warning = True

                # A rectangle is drawn around the found face.
                cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)

                # A rectangle is drawn below the name of the found face.
                img_pil = PIL.Image.fromarray(frame)
                draw = ImageDraw.Draw(img_pil)
                self.font = ImageFont.truetype(self.fontpath, int((right - left) / 2))
                textwidth, textheight = draw.textsize(name, self.font)
                bbox = (left, bottom, left + textwidth, bottom + textheight)

                # Draw the rectangle behind the text
                draw.rectangle(bbox, fill=(0, 0, 255))

                # Draw the name over the rectangle
                draw.text((left, bottom), name, font=self.font, fill=(255, 255, 255, 255))
                frame = np.array(img_pil)

                if self.warning:
                    self.unknowns_before = nfaces_unkn
                    self.last_warning = time.time()
                    self.warning = False

        # time_finish = time.time()


        # Time it takes the robot to write the name of the person, paint the boxes ... etc
        # with open("time_to_proccess_the_image.txt", "a") as file:
        #             line = str((time_finish - time_start) * 1000) + ". \n"
        #             file.write(line)



        # time_start = time.time()

        msg_faces = faces
        msg_frame = self.bridge.cv2_to_imgmsg(frame, "bgr8")

        self.message.faces = msg_faces
        self.message.frame = msg_frame
        self.message.top = msg_top
        self.message.right = msg_right
        self.message.bottom = msg_bottom
        self.message.left = msg_left
        self.message.names = self.face_names


        self.publisher_img.publish(self.message)
        # time_finish = time.time()
        # Time it takes the robot to prepare the message and send it
        # with open("time_to_proccess_and_send_msg.txt", "a") as file:
        #             line = str((time_finish - time_start) * 1000) + ". \n"
        #             file.write(line)

    def delete_callback(self, msg):
        """
        Callback for user delete subscription.
        Removes a user from the face recognition list.

        Args:
            msg: Message containing the name of the user to delete.
        """
        name = msg.data
        index = self.known_face_names.index(name)
        self.known_face_names.remove(name)
        del self.known_face_encodings[index]

    def create_callback(self, msg):
        """
        Callback for user creation subscription.
        Adds a new user to the facial recognition list.

        Args:
            msg: Message containing the name and image of the user to create.
        """
        name = msg.name
        face = self.bridge.imgmsg_to_cv2(msg.frame, desired_encoding='rgb8')
        person_face_encoding = face_recognition.face_encodings(face)[0]

        self.known_face_encodings.append(person_face_encoding)
        self.known_face_names.append(name)



def main(args=None):
    rclpy.init(args=args)
    node = Face_detector_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
