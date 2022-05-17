// Generated by gencpp from file mavros_msgs/MagnetometerReporter.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_MAGNETOMETERREPORTER_H
#define MAVROS_MSGS_MESSAGE_MAGNETOMETERREPORTER_H


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
struct MagnetometerReporter_
{
  typedef MagnetometerReporter_<ContainerAllocator> Type;

  MagnetometerReporter_()
    : header()
    , report(0)
    , confidence(0.0)  {
    }
  MagnetometerReporter_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , report(0)
    , confidence(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _report_type;
  _report_type report;

   typedef float _confidence_type;
  _confidence_type confidence;





  typedef boost::shared_ptr< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> const> ConstPtr;

}; // struct MagnetometerReporter_

typedef ::mavros_msgs::MagnetometerReporter_<std::allocator<void> > MagnetometerReporter;

typedef boost::shared_ptr< ::mavros_msgs::MagnetometerReporter > MagnetometerReporterPtr;
typedef boost::shared_ptr< ::mavros_msgs::MagnetometerReporter const> MagnetometerReporterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator1> & lhs, const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.report == rhs.report &&
    lhs.confidence == rhs.confidence;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator1> & lhs, const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1014202c8f02f171d3d0eef42920a2e";
  }

  static const char* value(const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1014202c8f02f17ULL;
  static const uint64_t static_value2 = 0x1d3d0eef42920a2eULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/MagnetometerReporter";
  }

  static const char* value(const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"uint8 report\n"
"float32 confidence\n"
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

  static const char* value(const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.report);
      stream.next(m.confidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MagnetometerReporter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::MagnetometerReporter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::MagnetometerReporter_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "report: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.report);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_MAGNETOMETERREPORTER_H
