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
	q.D=[0.17293458472649417, -0.2998847649678064, -0.00018602629146098466, 0.001425525529396718, 0.0]

	q.K=[506.4967347000561, 0.0, 320.0629417735544, 0.0, 506.72900264603385, 253.62556924070867, 0.0, 0.0, 1.0]

	q.R=[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0]

	q.P= [516.9603271484375, 0.0, 320.42872766235814, 0.0, 0.0, 518.5794067382812, 253.09656577748683, 0.0, 0.0, 0.0, 1.0, 0.0]

	q.binning_x=0
	q.binning_y=0
	q.roi.x_offset=0
	q.roi.y_offset=0
	q.roi.height=0
	q.roi.width=0
	q.roi.do_rectify=False  
	pub.publish(q)
	rate.sleep()