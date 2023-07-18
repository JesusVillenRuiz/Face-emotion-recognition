// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pers_msgs:msg/NewUsermsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__NEW_USERMSG__TRAITS_HPP_
#define PERS_MSGS__MSG__DETAIL__NEW_USERMSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pers_msgs/msg/detail/new_usermsg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frame'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace pers_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NewUsermsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NewUsermsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame:\n";
    to_block_style_yaml(msg.frame, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NewUsermsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pers_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pers_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pers_msgs::msg::NewUsermsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  pers_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pers_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pers_msgs::msg::NewUsermsg & msg)
{
  return pers_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pers_msgs::msg::NewUsermsg>()
{
  return "pers_msgs::msg::NewUsermsg";
}

template<>
inline const char * name<pers_msgs::msg::NewUsermsg>()
{
  return "pers_msgs/msg/NewUsermsg";
}

template<>
struct has_fixed_size<pers_msgs::msg::NewUsermsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pers_msgs::msg::NewUsermsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pers_msgs::msg::NewUsermsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERS_MSGS__MSG__DETAIL__NEW_USERMSG__TRAITS_HPP_
