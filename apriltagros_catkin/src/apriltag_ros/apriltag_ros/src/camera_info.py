#!/usr/bin/env python3

import rospy

from sensor_msgs.msg import CameraInfo

rospy.init_node('camers_info', anonymous=True)

#def callback(data):
#       q=CameraInfo()
#       print(q)
pub=rospy.Publisher('/camera_rect/camera_info', CameraInfo, queue_size=10)
rate = rospy.Rate(60)
while not rospy.is_shutdown():
	q=CameraInfo()
	#q.header.seq=30
	#q.header.stamp.secs=0
	#q.header.stamp.nsecs=0
	q.header.frame_id='usb_cam'
	q.height=480
	q.width=640
	#q.distortion_model='plumb_bob'
	q.D=[-0.07046945209190078, -0.1488995200083639, -0.00751026005919432, 0.01668843785529415, 0.0]

	q.K=[922.6815164976434, 0.0, 354.54734224223625, 0.0, 914.0037286520367, 229.8427167908208, 0.0, 0.0, 1.0]

	q.R=[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0]

	q.P= [908.146240234375, 0.0, 361.4236929763865, 0.0, 0.0, 911.169921875, 228.0414101682254, 0.0, 0.0, 0.0, 1.0, 0.0]

	q.binning_x=0
	q.binning_y=0
	q.roi.x_offset=0
	q.roi.y_offset=0
	q.roi.height=0
	q.roi.width=0
	q.roi.do_rectify=False  
	pub.publish(q)
	rate.sleep()