#!/usr/bin/env python3
import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from pers_msgs.msg import Facemsg
from cv_bridge import CvBridge
from statistics import mode
import numpy as np
import tensorflow as tf
import cv2
import asyncio
import time
from telegram import Bot
import tempfile
import PIL
from PIL import ImageDraw, ImageFont


async def send_photo_WithoutResponder(photo, message):
    """
    This function takes care of sending a photo without the need for the user to
    response or request for it.

    Args:
        message: text indicating that person X has been detected with a negative emotion.
    """
    # Saves ndarray as an image file.
    temp_filename = tempfile.mktemp(suffix='.png')
    cv2.imwrite(temp_filename, photo)

    # Send the image
    with open(temp_filename, 'rb') as photo_file:
        bot = Bot(token="6297274661:AAENxh-QOD5rfevbHUe1gWhqGmljzeJMCbY")
        await bot.send_photo(chat_id=761096513, photo=photo_file, caption=message)


class Emotion_detector_node(Node):
    def __init__(self):
        super().__init__('emotion_detector_node')
        print("Initializing...")
        self.bridge = CvBridge()
        
        # Configuration of the subscription to the topic /face that receives messages of type FaceMsg.
        # FaceMsg is a custom message containing an array of face images, the image captured by the camera, the coordinates of the detected faces and the names of the detected persons,
        # the coordinates of the detected faces and the names of the detected people...
        self.subscription_img = self.create_subscription(Facemsg, '/face', self.image_callback, 10)

        # Publication configuration to the /image topic that sends the final image with the detected emotions.
        self.publisher = self.create_publisher(Image, '/detection', 10)
        
        package_path = os.path.dirname(os.path.abspath(__file__))

        # Load the neural network model
        path_model = os.path.join(package_path, 'modelSS.h5')
        self.model = tf.keras.models.load_model(path_model)

        # Emotion dictionary
        self.emotions_dict = {
            0: ('Angry 😡', (255, 51, 0)),
            1: ('Disgusted 😒', (0, 204, 0)),
            2: ('Fearful 😨', (51, 153, 255)),
            3: ('Happy 🙂', (255, 255, 0)),
            4: ('Neutral 😐', (255, 255, 255)),
            5: ('Sad 😢', (0, 0, 255)),
            6: ('Surprised 😯', (200, 0, 200))
        }

        # list of negative emotions.
        self.bad_emotions = ["Angry 😡", "Disgusted 😒", "Afraid 😨", "Sad 😢"]

        self.times_dict = {}
        self.emotions_list = {}

        # Load the font to be able to use accents.
        self.fontpath = os.path.join(package_path, 'Roboto-Light.ttf')
        self.font = ImageFont.truetype(self.fontpath, 12)

        # wait time to send a new warning photo
        self.interval = 60 # seconds
        print("As soon as an image is received, emotion prediction will start...")

    def image_callback(self, msg):
        # convert message of type Facemsg to an array of images for use by opencv.
        frame = self.bridge.imgmsg_to_cv2(msg.frame, desired_encoding='rgb8')

        index = 0

        # time_start_iterate_faces = time.time()

        # Iterate in the layout of the faces
        for facemessage in msg.faces:
            
            # time_start_process_a_face = time.time()

            # Get the name of the detected person.
            name = msg.names[index]

            # Get the detected face
            face = self.bridge.imgmsg_to_cv2(facemessage, desired_encoding='rgb8')

            # Transform the image to grayscale and resize it for the model.
            final_image = cv2.resize(face, (224, 224))
            final_image = np.expand_dims(final_image, axis=0)
            final_image = final_image / 255.0

            # time_start_predict = time.time()

            # Perform the prediction of the emotion on the image
            predictions = self.model.predict(final_image)

            # time_finish_predict = time.time()

            # Time it takes the model to have a prediction
            # with open("time_to_predict.txt", "a") as file:
            #     line = str((time_finish_predict - time_start_predict) * 1000) + ". \n"
            #     file.write(line)

            # Find the minimum and maximum value
            minimum_value = np.min(predictions)
            maximum_value = np.max(predictions)

            # Normalization using min-max scaling
            normalized_predictions = [(x - minimum_value) / (maximum_value - minimum_value) for x in predictions]
            # print(normalized_predictions)

            # Get the array of predictions within the list.
            predictions_array = normalized_predictions[0]

            # Iterate over the dictionary of emotions
            for ind, (emotion_name, _) in self.emotions_dict.items():
                # Get the prediction value corresponding to the emotion index.
                prediction_value = predictions_array[ind]
                # Print the emotion and its prediction
                print(f"{emotion_name}: {prediction_value:.5f}")

            # Get the index of the emotion with the highest probability
            max = np.argmax(normalized_predictions)

            # if the person's name is not in the dictionary, add it
            if name not in self.emotions_list:
                self.emotions_list[name] = [max]
            else:
                # If the person's name is in the dictionary, adds the emotion to the list.
                self.emotions_list[name].append(max)

            # If there are more than 10 emotions in the list, remove the oldest emotion.
            if len(self.emotions_list[name]) > 10:
                self.emotions_list[name].pop(0)

            # Calculate the mode of the emotions in the list
            mode_emotion = mode(self.emotions_list[name])

            # Get the text and color of the emotion
            text = self.emotions_dict[mode_emotion][0]
            color = self.emotions_dict[mode_emotion][1]
            
            # time_start_warning_msg = time.time()

            # If the emotion is negative and the person is not unknown, send the photo to the telegram bot.
            if text in self.bad_emotions:
                caption = f"{name} has been detected with {text} emotion on the date and time: {str(time.asctime())}"

                # If the person is not unknown and the timeout has passed, send the photo.
                if name != 'Unknown' and (name not in self.times_dict or (time.time() - self.times_dict[name] > self.interval)):
                    self.times_dict[name] = time.time()
                    # and send everything to the telegram bot with the caption and photo.
                    asyncio.run(send_photo_WithoutResponder(face, caption))

            # time_finish_warning_msg = time.time()

            # Time it takes the robot to send a warning msg
            # with open("time_to_send_warning_msg.txt", "a") as file:
            #     line = str((time_finish_warning_msg - time_start_warning_msg) * 1000) + ". \n"
            #     file.write(line)

            # if text is not empty, draw the text on the picture
            if text != "":
                (top, right, bottom, left) = msg.top[index], msg.right[index], msg.bottom[index], msg.left[index]
                index += 1
                img_pil = PIL.Image.fromarray(frame)
                draw = ImageDraw.Draw(img_pil)
                self.font = ImageFont.truetype(self.fontpath, int((right - left) / 2))
                textwidth, textheight = draw.textsize(text.split()[0], self.font)

                bbox = (left, top - textheight - 5, left + textwidth, top)

                # Draw the rectangle behind the text
                draw.rectangle(bbox, fill=(255 - color[0], 255 - color[1], 255-color[2]))

                draw.text((left, top - textheight - 5), text.split()[0], font=self.font, fill=color, stroke_width=1)
                frame = np.array(img_pil)

            # time_finish_process_a_face = time.time()
            # Time it takes the robot to process a face
            # with open("time_to_process_a_face.txt", "a") as file:
            #     line = str((time_finish_process_a_face - time_start_process_a_face) * 1000) + ". \n"
            #     file.write(line)

        # time_finish_iterate_faces = time.time()

        # Time it takes the robot to iterate over the faces
        # with open("time_to_iterate_faces.txt", "a") as file:
        #         line = str((time_finish_iterate_faces - time_start_iterate_faces) * 1000) + ". \n"
        #         file.write(line)

        # time_start_publish_msg = time.time()

        # Publish the image with the drawn text
        # frame = cv2.resize(frame, dsize=(1000,700), interpolation=cv2.INTER_CUBIC)
        pub_msg = self.bridge.cv2_to_imgmsg(frame, encoding='rgb8')
        self.publisher.publish(pub_msg)
        # time_finish_publish_msg = time.time()

        # Time it takes the robot to publish the message
        # with open("time_to_publish_msg.txt", "a") as file:
        #         line = str((time_finish_publish_msg - time_start_publish_msg) * 1000) + ". \n"
        #         file.write(line)


def main(args=None):
    rclpy.init(args=args)
    node = Emotion_detector_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
