#!/usr/bin/env python3

import rospy
from sensor_msgs.msg import Image
import cv2
import numpy as np
from cv_bridge import CvBridge, CvBridgeError

def webcam_pub():
 pub = rospy.Publisher('/camera_rect/image_rect', Image, queue_size=1)
 rospy.init_node('webcam_pub', anonymous=True)
 rate = rospy.Rate(60) # 60hz

 cam = cv2.VideoCapture(0)



 while not rospy.is_shutdown():
  ret, frame = cam.read()
  bridge = CvBridge()
  msg = bridge.cv2_to_imgmsg(frame, encoding="bgr8")

  if ret:
   rospy.loginfo("Capturing image")

  pub.publish(msg)
  rate.sleep()


if __name__ == '__main__':
 try:
  webcam_pub()
 except rospy.ROSInterruptException:
  pass