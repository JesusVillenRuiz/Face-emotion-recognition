from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='usb_cam',
            executable='usb_cam_node_exe',
        ),
        Node(
            package='fer_pkg',
            executable='Face_detector_node',
            name='face_detector'
        ),
        Node(
            package='fer_pkg',
            executable='Emotion_detector_node',
            name='emotion_detector'
        ),
        Node(
            package='fer_pkg',
            executable='TelegramNode',
            name='bot'
        ),
        Node(
            package='image_tools',
            executable='showimage',
            name='verbose',
            remappings=[('image', '/detection')]
        )
    ])
