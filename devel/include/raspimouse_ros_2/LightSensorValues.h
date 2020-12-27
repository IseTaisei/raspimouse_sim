// Generated by gencpp from file raspimouse_ros_2/LightSensorValues.msg
// DO NOT EDIT!


#ifndef RASPIMOUSE_ROS_2_MESSAGE_LIGHTSENSORVALUES_H
#define RASPIMOUSE_ROS_2_MESSAGE_LIGHTSENSORVALUES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace raspimouse_ros_2
{
template <class ContainerAllocator>
struct LightSensorValues_
{
  typedef LightSensorValues_<ContainerAllocator> Type;

  LightSensorValues_()
    : right_forward(0)
    , right_side(0)
    , left_side(0)
    , left_forward(0)
    , sum_all(0)
    , sum_forward(0)  {
    }
  LightSensorValues_(const ContainerAllocator& _alloc)
    : right_forward(0)
    , right_side(0)
    , left_side(0)
    , left_forward(0)
    , sum_all(0)
    , sum_forward(0)  {
  (void)_alloc;
    }



   typedef int16_t _right_forward_type;
  _right_forward_type right_forward;

   typedef int16_t _right_side_type;
  _right_side_type right_side;

   typedef int16_t _left_side_type;
  _left_side_type left_side;

   typedef int16_t _left_forward_type;
  _left_forward_type left_forward;

   typedef int16_t _sum_all_type;
  _sum_all_type sum_all;

   typedef int16_t _sum_forward_type;
  _sum_forward_type sum_forward;





  typedef boost::shared_ptr< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> const> ConstPtr;

}; // struct LightSensorValues_

typedef ::raspimouse_ros_2::LightSensorValues_<std::allocator<void> > LightSensorValues;

typedef boost::shared_ptr< ::raspimouse_ros_2::LightSensorValues > LightSensorValuesPtr;
typedef boost::shared_ptr< ::raspimouse_ros_2::LightSensorValues const> LightSensorValuesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator1> & lhs, const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator2> & rhs)
{
  return lhs.right_forward == rhs.right_forward &&
    lhs.right_side == rhs.right_side &&
    lhs.left_side == rhs.left_side &&
    lhs.left_forward == rhs.left_forward &&
    lhs.sum_all == rhs.sum_all &&
    lhs.sum_forward == rhs.sum_forward;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator1> & lhs, const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raspimouse_ros_2

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c174e6891a013b1ba6a929fcc020e0a3";
  }

  static const char* value(const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc174e6891a013b1bULL;
  static const uint64_t static_value2 = 0xa6a929fcc020e0a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raspimouse_ros_2/LightSensorValues";
  }

  static const char* value(const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 right_forward\n"
"int16 right_side\n"
"int16 left_side\n"
"int16 left_forward\n"
"int16 sum_all\n"
"int16 sum_forward\n"
;
  }

  static const char* value(const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.right_forward);
      stream.next(m.right_side);
      stream.next(m.left_side);
      stream.next(m.left_forward);
      stream.next(m.sum_all);
      stream.next(m.sum_forward);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LightSensorValues_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raspimouse_ros_2::LightSensorValues_<ContainerAllocator>& v)
  {
    s << indent << "right_forward: ";
    Printer<int16_t>::stream(s, indent + "  ", v.right_forward);
    s << indent << "right_side: ";
    Printer<int16_t>::stream(s, indent + "  ", v.right_side);
    s << indent << "left_side: ";
    Printer<int16_t>::stream(s, indent + "  ", v.left_side);
    s << indent << "left_forward: ";
    Printer<int16_t>::stream(s, indent + "  ", v.left_forward);
    s << indent << "sum_all: ";
    Printer<int16_t>::stream(s, indent + "  ", v.sum_all);
    s << indent << "sum_forward: ";
    Printer<int16_t>::stream(s, indent + "  ", v.sum_forward);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RASPIMOUSE_ROS_2_MESSAGE_LIGHTSENSORVALUES_H
