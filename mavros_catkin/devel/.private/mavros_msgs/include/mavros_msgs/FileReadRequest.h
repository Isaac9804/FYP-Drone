// Generated by gencpp from file mavros_msgs/FileReadRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILEREADREQUEST_H
#define MAVROS_MSGS_MESSAGE_FILEREADREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct FileReadRequest_
{
  typedef FileReadRequest_<ContainerAllocator> Type;

  FileReadRequest_()
    : file_path()
    , offset(0)
    , size(0)  {
    }
  FileReadRequest_(const ContainerAllocator& _alloc)
    : file_path(_alloc)
    , offset(0)
    , size(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _file_path_type;
  _file_path_type file_path;

   typedef uint64_t _offset_type;
  _offset_type offset;

   typedef uint64_t _size_type;
  _size_type size;





  typedef boost::shared_ptr< ::mavros_msgs::FileReadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileReadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FileReadRequest_

typedef ::mavros_msgs::FileReadRequest_<std::allocator<void> > FileReadRequest;

typedef boost::shared_ptr< ::mavros_msgs::FileReadRequest > FileReadRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::FileReadRequest const> FileReadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileReadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::FileReadRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileReadRequest_<ContainerAllocator2> & rhs)
{
  return lhs.file_path == rhs.file_path &&
    lhs.offset == rhs.offset &&
    lhs.size == rhs.size;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::FileReadRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileReadRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileReadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileReadRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileReadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c83da8c18af06c9d7d1b66667fa2bb6b";
  }

  static const char* value(const ::mavros_msgs::FileReadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc83da8c18af06c9dULL;
  static const uint64_t static_value2 = 0x7d1b66667fa2bb6bULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileReadRequest";
  }

  static const char* value(const ::mavros_msgs::FileReadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# FTP::Read\n"
"#\n"
"# Call FTP::Open first.\n"
"# :success:	indicates success end of request\n"
"# :r_errno:	remote errno if applicapable\n"
"\n"
"string file_path\n"
"uint64 offset\n"
"uint64 size\n"
;
  }

  static const char* value(const ::mavros_msgs::FileReadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.file_path);
      stream.next(m.offset);
      stream.next(m.size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FileReadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileReadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileReadRequest_<ContainerAllocator>& v)
  {
    s << indent << "file_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.file_path);
    s << indent << "offset: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.offset);
    s << indent << "size: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILEREADREQUEST_H
