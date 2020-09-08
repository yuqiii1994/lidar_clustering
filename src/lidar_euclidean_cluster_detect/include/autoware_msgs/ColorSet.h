// Generated by gencpp from file autoware_msgs/ColorSet.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_COLORSET_H
#define AUTOWARE_MSGS_MESSAGE_COLORSET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <autoware_msgs/ValueSet.h>
#include <autoware_msgs/ValueSet.h>
#include <autoware_msgs/ValueSet.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct ColorSet_
{
  typedef ColorSet_<ContainerAllocator> Type;

  ColorSet_()
    : Hue()
    , Sat()
    , Val()  {
    }
  ColorSet_(const ContainerAllocator& _alloc)
    : Hue(_alloc)
    , Sat(_alloc)
    , Val(_alloc)  {
  (void)_alloc;
    }



   typedef  ::autoware_msgs::ValueSet_<ContainerAllocator>  _Hue_type;
  _Hue_type Hue;

   typedef  ::autoware_msgs::ValueSet_<ContainerAllocator>  _Sat_type;
  _Sat_type Sat;

   typedef  ::autoware_msgs::ValueSet_<ContainerAllocator>  _Val_type;
  _Val_type Val;





  typedef boost::shared_ptr< ::autoware_msgs::ColorSet_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ColorSet_<ContainerAllocator> const> ConstPtr;

}; // struct ColorSet_

typedef ::autoware_msgs::ColorSet_<std::allocator<void> > ColorSet;

typedef boost::shared_ptr< ::autoware_msgs::ColorSet > ColorSetPtr;
typedef boost::shared_ptr< ::autoware_msgs::ColorSet const> ColorSetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ColorSet_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ColorSet_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::ColorSet_<ContainerAllocator1> & lhs, const ::autoware_msgs::ColorSet_<ContainerAllocator2> & rhs)
{
  return lhs.Hue == rhs.Hue &&
    lhs.Sat == rhs.Sat &&
    lhs.Val == rhs.Val;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::ColorSet_<ContainerAllocator1> & lhs, const ::autoware_msgs::ColorSet_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ColorSet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ColorSet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ColorSet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ColorSet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ColorSet_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ColorSet_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ColorSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c934ba71e28648240ca7f87de508588d";
  }

  static const char* value(const ::autoware_msgs::ColorSet_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc934ba71e2864824ULL;
  static const uint64_t static_value2 = 0x0ca7f87de508588dULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ColorSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ColorSet";
  }

  static const char* value(const ::autoware_msgs::ColorSet_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ColorSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ValueSet Hue\n"
"ValueSet Sat\n"
"ValueSet Val\n"
"\n"
"================================================================================\n"
"MSG: autoware_msgs/ValueSet\n"
"int32 center\n"
"int32 range\n"
;
  }

  static const char* value(const ::autoware_msgs::ColorSet_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ColorSet_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Hue);
      stream.next(m.Sat);
      stream.next(m.Val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ColorSet_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ColorSet_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ColorSet_<ContainerAllocator>& v)
  {
    s << indent << "Hue: ";
    s << std::endl;
    Printer< ::autoware_msgs::ValueSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Hue);
    s << indent << "Sat: ";
    s << std::endl;
    Printer< ::autoware_msgs::ValueSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Sat);
    s << indent << "Val: ";
    s << std::endl;
    Printer< ::autoware_msgs::ValueSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_COLORSET_H
