// Generated by gencpp from file raspimouse_ros/Switches.msg
// DO NOT EDIT!


#ifndef RASPIMOUSE_ROS_MESSAGE_SWITCHES_H
#define RASPIMOUSE_ROS_MESSAGE_SWITCHES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace raspimouse_ros
{
template <class ContainerAllocator>
struct Switches_
{
  typedef Switches_<ContainerAllocator> Type;

  Switches_()
    : front(false)
    , center(false)
    , rear(false)
    , state()  {
    }
  Switches_(const ContainerAllocator& _alloc)
    : front(false)
    , center(false)
    , rear(false)
    , state(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _front_type;
  _front_type front;

   typedef uint8_t _center_type;
  _center_type center;

   typedef uint8_t _rear_type;
  _rear_type rear;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::raspimouse_ros::Switches_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raspimouse_ros::Switches_<ContainerAllocator> const> ConstPtr;

}; // struct Switches_

typedef ::raspimouse_ros::Switches_<std::allocator<void> > Switches;

typedef boost::shared_ptr< ::raspimouse_ros::Switches > SwitchesPtr;
typedef boost::shared_ptr< ::raspimouse_ros::Switches const> SwitchesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raspimouse_ros::Switches_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raspimouse_ros::Switches_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raspimouse_ros::Switches_<ContainerAllocator1> & lhs, const ::raspimouse_ros::Switches_<ContainerAllocator2> & rhs)
{
  return lhs.front == rhs.front &&
    lhs.center == rhs.center &&
    lhs.rear == rhs.rear &&
    lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raspimouse_ros::Switches_<ContainerAllocator1> & lhs, const ::raspimouse_ros::Switches_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raspimouse_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::raspimouse_ros::Switches_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raspimouse_ros::Switches_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raspimouse_ros::Switches_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raspimouse_ros::Switches_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raspimouse_ros::Switches_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raspimouse_ros::Switches_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raspimouse_ros::Switches_<ContainerAllocator> >
{
  static const char* value()
  {
    return "72c4e0ea7f10bb6472900855b4640fa2";
  }

  static const char* value(const ::raspimouse_ros::Switches_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x72c4e0ea7f10bb64ULL;
  static const uint64_t static_value2 = 0x72900855b4640fa2ULL;
};

template<class ContainerAllocator>
struct DataType< ::raspimouse_ros::Switches_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raspimouse_ros/Switches";
  }

  static const char* value(const ::raspimouse_ros::Switches_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raspimouse_ros::Switches_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool front\n"
"bool center\n"
"bool rear\n"
"string state\n"
;
  }

  static const char* value(const ::raspimouse_ros::Switches_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raspimouse_ros::Switches_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.front);
      stream.next(m.center);
      stream.next(m.rear);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Switches_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raspimouse_ros::Switches_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raspimouse_ros::Switches_<ContainerAllocator>& v)
  {
    s << indent << "front: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.front);
    s << indent << "center: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.center);
    s << indent << "rear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rear);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RASPIMOUSE_ROS_MESSAGE_SWITCHES_H
