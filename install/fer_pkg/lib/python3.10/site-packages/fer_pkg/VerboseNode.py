#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class VerboseNode(Node):
    def __init__(self):
        super().__init__('image_viewer_node')
        self.bridge = CvBridge()
        self.image_sub = self.create_subscription(
            Image,
            '/emotion',
            self.image_callback,
            10
        )
        self.cv_image = None

    def image_callback(self, msg):
        self.cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        cv2.namedWindow('Emotion Image', cv2.WINDOW_NORMAL)
        if self.cv_image is not None:
            cv2.imshow('Emotion Image', self.cv_image)

def main(args=None):
    rclpy.init(args=args)
    node = VerboseNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
