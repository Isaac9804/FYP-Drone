# FYP-Drone

## Hardware information
### Computer
* Illegear onyx v ryzen : [Buy Here](https://www.illegear.com/staging/ms/onyx-series/30-onyx-v-ryzen.html#/peripherals-63wh_battery_pack_upgrade/laptop_display-15_6_120hz_full_hd_anti_glare_ips_infinivision_display/1st_m_2_solid_state_drive-500gb_m_2_pcie_nvme_solid_state_drive/operating_system-windows_10_free_trial_edition_no_license_key/laptop_warranty-2_year_carry_in_warranty_lifetime_technical_support/laptop_processor-amd_ryzen_5_4600h_processor_6_cores_12_threads_3_0ghz_to_4_0ghz/laptop_graphics_card-nvidia_geforce_gtx_1650_4gb_gddr6_with_optimus/thermal_cooling-stock_standard_thermal_compound/laptop_ram-8gb_ddr4_ram_3200mhz_1_x_8gb/2nd_m_2_solid_state_drive-none/wireless_network_card-intel_wi_fi_6_ax200_2x2_m_2_wlan_bluetooth_5_1_combo)

* AMD Ryzen 7 4000 series
* NVidia Geforce 1650
* 16GB Ram
* Ubuntu 20.04 : [Download Here](https://ubuntu.com/download/desktop)
* ROS Noetic : [Download Here](http://wiki.ros.org/noetic/Installation/Ubuntu)

### Raspberry Pi 4

* 8GB Ram Version : [Buy Here](https://my.cytron.io/p-raspberry-pi-4-model-b-beginner-kit-v2-uk-plug?r=1&gclid=CjwKCAjw7IeUBhBbEiwADhiEMc3LTA8TWUUbqqZTsxpIU1yHaYw5G7_EpvrBV7HRZkTpaN6RSorLYxoCSr0QAvD_BwE)
* Raspberry Pi 8MP Camera Module V2.1 : [Buy Here](https://my.cytron.io/p-raspberry-pi-8mp-camera-module-v2?r=1&gclid=CjwKCAjw7IeUBhBbEiwADhiEMZV6nE5OrRSeGM5dDr68Os8R4OmtrTVkYTVvahfQe8MGpoyDM-wF_hoCLjAQAvD_BwE)
* Ubuntu Mate 20.04 64-bit : [Download Here](https://ubuntu-mate.org/download/)
* ROS Noetic : [Download Here](http://wiki.ros.org/noetic/Installation/Ubuntu)

### Drone 
* Drone Frame
* Pixhawk
* Battery
* ESC
* Brushless Motor
* TF02 PRO Rangefinder LiDAR (40m)

```bash
# To remove git from file, first go to the directory
rm -rf .git
# To check status
git status     # It should show "fatal: not a git repository (or any of the parent directories): .git"
```

## Sourcing bash file
```bash
nano /.bashrc

# type the source folder in the bash script
source /opt/ros/noetic/setup.bash
source ~/FYP-Drone/usbcam_catkin/devel/setup.bash
source ~/FYP-Drone/mavros_catkin/devel/setup.bash
source ~/FYP-Drone/lidar_catkin/devel/setup.bash
source ~/FYP-Drone/apriltagros_catkin/devel_isolated/setup.bash
```
## Camera Calibration
`Usb Camera Package` can be downloaded from the [Usb_cam for ROS](http://wiki.ros.org/usb_cam)

### Setup
`This is required` if you download directly from the [Usb_cam for ROS](https://github.com/ros-drivers/usb_cam.git) but if you downloaded from this repository you can skip it to the calibration step.

1.Building the packages
```bash
cd ~/FYP-Drone/usbcam_catkin/
catkin_make
```
2.Running the File
```bash
source ~/FYP-Drone/usbcam_catkin/devel/setup.bash
# Calibration of camera
roslaunch usb_cam usb_cam-test.launch
rosrun camera_calibration cameracalibrator.py  --size 9x6 --square 0.020 image:=/usb_cam/image_raw camera:=/usb_cam
```
Download the [calibration image](https://github.com/Isaac9804/FYP-Drone/blob/9e3d2e10979b4088d7b0b312a1ba2a5b7ff2fd4a/Images/calibration_image.jpg) on a paper and measure the length of the square where the value in `--square 0.020` can be change. It is in meters.
As seen in the Image below press the calibration button once it lights up and transfer the matrices to the [camera_info.py](https://github.com/Isaac9804/FYP-Drone/blob/318a1ce0a790f17f3d5b52031def250ffc440f3c/apriltagros_catkin/src/apriltag_ros/apriltag_ros/src/camera_info.py).

```python
# Adding the matrices in the camera_info.py

**** Calibrating ****
mono pinhole calibration...
D = [0.17293458472649417, -0.2998847649678064, -0.00018602629146098466, 0.001425525529396718, 0.0]
K = [506.4967347000561, 0.0, 320.0629417735544, 0.0, 506.72900264603385, 253.62556924070867, 0.0, 0.0, 1.0]
R = [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0]
P = [516.9603271484375, 0.0, 320.42872766235814, 0.0, 0.0, 518.5794067382812, 253.09656577748683, 0.0, 0.0, 0.0, 1.0, 0.0]
None
# oST version 5.0 parameters

```

<img src="Images/calibration-test.png" width=1000>


## Apriltag
`Apriltag_ros Package` can be downloaded from the [AprilTag Official Website](https://github.com/AprilRobotics/apriltag_ros)

### Setup
`This is required` if you download directly from the [AprilTag Official Website](https://github.com/AprilRobotics/apriltag_ros) but if you downloaded from this repository you can skip to no.5

1.Placing the tag id in the [tags.yaml](https://github.com/Isaac9804/FYP-Drone/blob/aa2f3e5a3a2799efdec1f08c26a21d8d6e49e7c4/apriltagros_catkin/src/apriltag_ros/apriltag_ros/config/tags.yaml)
 file located:
```bash
cd ~/FYP-Drone/apriltagros_catkin/src/apriltag_ros/apriltag_ros/config
nano tags.yaml
```
```yaml

# Adding code below to the tags.yaml file
# Line 20

standalone_tags:
  [
     {id: 0 , size: 0.157},
     {id: 1 , size: 0.157},
     {id: 2 , size: 0.157},
     {id: 3 , size: 0.157},
     {id: 4 , size: 0.157},
     {id: 5 , size: 0.157},
     {id: 6 , size: 0.157},
     {id: 7 , size: 0.157},
     {id: 8 , size: 0.157},
     {id: 9 , size: 0.157},
     {id: 10 , size: 0.157},
     {id: 11 , size: 0.157},
     {id: 12 , size: 0.157},
     {id: 13 , size: 0.157},
     {id: 14 , size: 0.157},
     {id: 15 , size: 0.157},
     {id: 16 , size: 0.157},

  ]
  ```
2. Adding [cv_ros.py](https://github.com/Isaac9804/FYP-Drone/blob/318a1ce0a790f17f3d5b52031def250ffc440f3c/apriltagros_catkin/src/apriltag_ros/apriltag_ros/src/cv_ros.py) and [camera_info.py](https://github.com/Isaac9804/FYP-Drone/blob/318a1ce0a790f17f3d5b52031def250ffc440f3c/apriltagros_catkin/src/apriltag_ros/apriltag_ros/src/camera_info.py) into the src file

```bash
cd ~/FYP-Drone/apriltagros_catkin/src/apriltag_ros/apriltag_ros/src
nano cv_ros.py       # Paste the code from cv_ros.py into here
nano camera_info.py  # Paste the code from camera_info.py into here
```
3.Configuring the [continuous_detection.launch](https://github.com/Isaac9804/FYP-Drone/blob/aa2f3e5a3a2799efdec1f08c26a21d8d6e49e7c4/apriltagros_catkin/src/apriltag_ros/apriltag_ros/launch/continuous_detection.launch) file will allow to us to execute the `cv_ros.py` and `camera_info.py` simultaneously.

```bash
cd ~/FYP-Drone/apriltagros_catkin/src/apriltag_ros/apriltag_ros/launch
nano continous_detection.launch        # Paste the code below into the continuous_detection.launch file
```
```xml
<!-- Add this to line 19 of the continuous_detection.launch file -->

<node name="camera" pkg="apriltag_ros" type="cv_ros.py" />
<node name="info" pkg="apriltag_ros" type="camera_info.py" />
```

4.Adding [usb_cam.launch](https://github.com/Isaac9804/FYP-Drone/blob/aa2f3e5a3a2799efdec1f08c26a21d8d6e49e7c4/apriltagros_catkin/src/apriltag_ros/apriltag_ros/launch/usb_cam.launch) file
```bash
cd ~/FYP-Drone/apriltagros_catkin/src/apriltag_ros/apriltag_ros/launch
nano usb_cam.launch        # Paste the code from usb_cam.launch into here
```

5.Building and launching the package

```bash
# Building the package
cd ~/FYP-Drone/apriltagros_catkin
source /opt/ros/noetic/setup.bash
catkin_make_isolated

#Launching the package
source ~/FYP-Drone/apriltagros_catkin/devel_isolated/setup.bash
chmod +x cv_ros.py
chmod +x camera_info.py
roslaunch apriltag_ros continuous_detection.launch
```
6.To view the image_detection : [Tag for testing](https://github.com/Isaac9804/FYP-Drone/blob/ba25caf635169bb35377c764af463dce2361df72/Images/ros-apriltag-board.png)
```bash
rqt_image_view    # Place a printed out tag and the id will be displayed.
```
Preview Image of testing:

<img src="Images/AprilTag_detectionTest.png" >

# Rangefinder LIDAR

## Connection of Rangefinder to USB
You can download the [tfmini_ros package here](https://github.com/TFmini/TFmini-ROS) and if you downloaded from this repository just follow the setups below.

1.Preview of the rangefinder detection to TTL USB:
<img src="Images/RangefinderUSB.jpg">

2.Build the tfmini_ros package and run the launch file
```bash
# Building the tfmini_ros package;
cd ~/FYP-Drone/lidar_catkin
catkin_make

# To run the launch file;
sudo chmod 666 /dev/ttyUSB0
source ~/FYP-Drone/lidar_catkin/devel/setup.bash
roslaunch tfmini_ros tfmini.launch

# To check the rostopic we can echo the message;
rostopic echo /tfmini_ros_node/TFmini 
```
```bash
# The output of the topic echo;
---
header: 
  seq: 2624
  stamp: 
    secs: 1655493218
    nsecs: 209856989
  frame_id: "TFmini"
radiation_type: 1
field_of_view: 0.03999999910593033
min_range: 0.30000001192092896
max_range: 12.0
range: 0.7599999904632568
---

```

# MAVROS

## Installation of MAVROS for Pixhawk

1.Installing [Mavros Packages Here](https://docs.px4.io/v1.12/en/ros/mavros_installation.html)

2.When building the mavros packages it requires catkin_tools and if the build installation cannot be done download the [catkin_tools here](https://catkin-tools.readthedocs.io/en/latest/installing.html)

3.After the build is initialised, connect the pixhawk with the computer/raspberry pi through usb data transfer cable. 

```bash
# Check if the pixhawk is connected to the raspberry pi
cd ~/FYP-Drone/mavros_catkin
catkin build
ls /dev
 -- list will show ttyACM0 --

# Provide access for the pixhawk port (https://askubuntu.com/questions/210177/serial-port-terminal-cannot-open-dev-ttys0-permission-denied)
sudo chmod 666 /dev/ttyACM0

# Run the px4.launch file
source ~/FYP-Drone/mavros_catkin/devel/setup.bash
roslaunch mavros px4.launch
```
4.Code to fly the drone [here](https://github.com/aniskoubaa/ros_dronemap)