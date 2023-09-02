# Face Emotion Recognition System

Welcome to the Face Emotion Recognition System project! This system focuses on facial emotion detection using Python, OpenCV, face_recognition, and ROS 2. It's designed to enhance the quality of life for nursing home residents by providing early emotion detection and interaction with an assisting robot.

## Usage Instructions

To start the Face Emotion Recognition System, you have two options:

### Using the Launch File

1. Open a terminal with two tabs or two separate terminals.
2. In the first tab, run the following command to open the robot's camera: `ros2 run usb_cam usb_cam_node_exe`.
   - This command initializes the node responsible for accessing the robot's camera.
3. In the second tab, launch the system using the provided launch file: `ros2 launch fer_pkg face_emotion_recognition_launch.py`.

### Manual Node Execution

1. Open five terminal tabs or five separate terminals.
2. In the first tab, execute the following command to open the robot's camera: `ros2 run usb_cam usb_cam_node_exe`.
3. In the second, third, and fourth tabs, run the following commands respectively:
   - `ros2 run fer_pkg Face_detector_node`
   - `ros2 run fer_pkg Emotion_detector_node`
   - `ros2 run fer_pkg TelegramNode`
4. In the fifth tab, execute `ros2 run image_tools showimage`.

Within seconds, the system will be up and running.

The first method is simpler and quicker to launch but may result in information loss as nodes publish information in the terminal. In contrast, the second method, with each node running in an independent terminal, provides more user-friendly and understandable information.

Additionally, users can control the robot's movement, allowing it to move around, avoid obstacles for a set duration, or navigate to a specific point on the map. To do this, launch the following command in a new terminal: `ros2 launch missions_pkg giraff_launch.py`.

## Installation

To ensure the system functions correctly, please follow these installation tutorials:

1. Have a device with Ubuntu/Xubuntu 22.04 installed.
2. Install Python 3.10.
3. Install ROS 2.
4. Install the USB camera node using: `sudo apt-get install ros-humble-usb-cam`.
5. Install the necessary libraries for the Telegram bot:
   - `pip install python-telegram-bot`
   - `pip install telebot`
6. Install face-recognition (follow the steps carefully on their official page):
   - Install Dlib.
   - `pip3 install face_recognition`.
7. Install colcon to compile the project: `sudo apt install python3-colcon-common-extensions`.
8. Compile the project: `colcon build`.
9. Place the files 'ModeloSS.h5' and 'Roboto-Light' in the directory:
   - '/install/fer_pkg/lib/python3.10/site-packages/fer_pkg'.

## Access to Code

You can access the project's code on the GitHub repository: [Face-emotion-recognition](https://github.com/JesusVillenRuiz/Femotion-recognition.git).

## Demo Video

Check out the project in action on YouTube: [Demo Video](https://youtu.be/kohBtF85-Ms).

## License

This project is licensed under the [MIT License](LICENSE).
