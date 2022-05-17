// Generated by gencpp from file mavros_msgs/MountConfigureRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_MOUNTCONFIGUREREQUEST_H
#define MAVROS_MSGS_MESSAGE_MOUNTCONFIGUREREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct MountConfigureRequest_
{
  typedef MountConfigureRequest_<ContainerAllocator> Type;

  MountConfigureRequest_()
    : header()
    , mode(0)
    , stabilize_roll(false)
    , stabilize_pitch(false)
    , stabilize_yaw(false)
    , roll_input(0)
    , pitch_input(0)
    , yaw_input(0)  {
    }
  MountConfigureRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mode(0)
    , stabilize_roll(false)
    , stabilize_pitch(false)
    , stabilize_yaw(false)
    , roll_input(0)
    , pitch_input(0)
    , yaw_input(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef uint8_t _stabilize_roll_type;
  _stabilize_roll_type stabilize_roll;

   typedef uint8_t _stabilize_pitch_type;
  _stabilize_pitch_type stabilize_pitch;

   typedef uint8_t _stabilize_yaw_type;
  _stabilize_yaw_type stabilize_yaw;

   typedef uint8_t _roll_input_type;
  _roll_input_type roll_input;

   typedef uint8_t _pitch_input_type;
  _pitch_input_type pitch_input;

   typedef uint8_t _yaw_input_type;
  _yaw_input_type yaw_input;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MODE_RETRACT)
  #undef MODE_RETRACT
#endif
#if defined(_WIN32) && defined(MODE_NEUTRAL)
  #undef MODE_NEUTRAL
#endif
#if defined(_WIN32) && defined(MODE_MAVLINK_TARGETING)
  #undef MODE_MAVLINK_TARGETING
#endif
#if defined(_WIN32) && defined(MODE_RC_TARGETING)
  #undef MODE_RC_TARGETING
#endif
#if defined(_WIN32) && defined(MODE_GPS_POINT)
  #undef MODE_GPS_POINT
#endif
#if defined(_WIN32) && defined(INPUT_ANGLE_BODY_FRAME)
  #undef INPUT_ANGLE_BODY_FRAME
#endif
#if defined(_WIN32) && defined(INPUT_ANGULAR_RATE)
  #undef INPUT_ANGULAR_RATE
#endif
#if defined(_WIN32) && defined(INPUT_ANGLE_ABSOLUTE_FRAME)
  #undef INPUT_ANGLE_ABSOLUTE_FRAME
#endif

  enum {
    MODE_RETRACT = 0u,
    MODE_NEUTRAL = 1u,
    MODE_MAVLINK_TARGETING = 2u,
    MODE_RC_TARGETING = 3u,
    MODE_GPS_POINT = 4u,
    INPUT_ANGLE_BODY_FRAME = 0u,
    INPUT_ANGULAR_RATE = 1u,
    INPUT_ANGLE_ABSOLUTE_FRAME = 2u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MountConfigureRequest_

typedef ::mavros_msgs::MountConfigureRequest_<std::allocator<void> > MountConfigureRequest;

typedef boost::shared_ptr< ::mavros_msgs::MountConfigureRequest > MountConfigureRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::MountConfigureRequest const> MountConfigureRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.mode == rhs.mode &&
    lhs.stabilize_roll == rhs.stabilize_roll &&
    lhs.stabilize_pitch == rhs.stabilize_pitch &&
    lhs.stabilize_yaw == rhs.stabilize_yaw &&
    lhs.roll_input == rhs.roll_input &&
    lhs.pitch_input == rhs.pitch_input &&
    lhs.yaw_input == rhs.yaw_input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6abfbffc4f7b14d5b05955b1813ae50e";
  }

  static const char* value(const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6abfbffc4f7b14d5ULL;
  static const uint64_t static_value2 = 0xb05955b1813ae50eULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/MountConfigureRequest";
  }

  static const char* value(const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MAVLink message: DO_MOUNT_CONTROL\n"
"# https://mavlink.io/en/messages/common.html#MAV_CMD_DO_MOUNT_CONFIGURE\n"
"\n"
"std_msgs/Header header\n"
"\n"
"uint8 mode              # See enum MAV_MOUNT_MODE.\n"
"#MAV_MOUNT_MODE\n"
"uint8 MODE_RETRACT = 0\n"
"uint8 MODE_NEUTRAL = 1\n"
"uint8 MODE_MAVLINK_TARGETING = 2\n"
"uint8 MODE_RC_TARGETING = 3\n"
"uint8 MODE_GPS_POINT = 4\n"
"\n"
"bool stabilize_roll     # stabilize roll? (1 = yes, 0 = no)\n"
"bool stabilize_pitch    # stabilize pitch? (1 = yes, 0 = no)\n"
"bool stabilize_yaw      # stabilize yaw? (1 = yes, 0 = no)\n"
"uint8 roll_input        # roll input (See enum MOUNT_INPUT)\n"
"uint8 pitch_input       # pitch input (See enum MOUNT_INPUT)\n"
"uint8 yaw_input         # yaw input (See enum MOUNT_INPUT)\n"
"\n"
"#MOUNT_INPUT\n"
"uint8 INPUT_ANGLE_BODY_FRAME = 0\n"
"uint8 INPUT_ANGULAR_RATE = 1\n"
"uint8 INPUT_ANGLE_ABSOLUTE_FRAME = 2\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mode);
      stream.next(m.stabilize_roll);
      stream.next(m.stabilize_pitch);
      stream.next(m.stabilize_yaw);
      stream.next(m.roll_input);
      stream.next(m.pitch_input);
      stream.next(m.yaw_input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MountConfigureRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::MountConfigureRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::MountConfigureRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "stabilize_roll: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stabilize_roll);
    s << indent << "stabilize_pitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stabilize_pitch);
    s << indent << "stabilize_yaw: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stabilize_yaw);
    s << indent << "roll_input: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.roll_input);
    s << indent << "pitch_input: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pitch_input);
    s << indent << "yaw_input: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yaw_input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_MOUNTCONFIGUREREQUEST_H
