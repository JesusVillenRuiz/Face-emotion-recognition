// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pers_msgs:msg/NuevoUsuariomsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__TRAITS_HPP_
#define PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pers_msgs/msg/detail/nuevo_usuariomsg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frame'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace pers_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NuevoUsuariomsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
    out << ", ";
  }

  // member: nombre
  {
    out << "nombre: ";
    rosidl_generator_traits::value_to_yaml(msg.nombre, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NuevoUsuariomsg & msg,
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

  // member: nombre
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nombre: ";
    rosidl_generator_traits::value_to_yaml(msg.nombre, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NuevoUsuariomsg & msg, bool use_flow_style = false)
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
  const pers_msgs::msg::NuevoUsuariomsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  pers_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pers_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pers_msgs::msg::NuevoUsuariomsg & msg)
{
  return pers_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pers_msgs::msg::NuevoUsuariomsg>()
{
  return "pers_msgs::msg::NuevoUsuariomsg";
}

template<>
inline const char * name<pers_msgs::msg::NuevoUsuariomsg>()
{
  return "pers_msgs/msg/NuevoUsuariomsg";
}

template<>
struct has_fixed_size<pers_msgs::msg::NuevoUsuariomsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pers_msgs::msg::NuevoUsuariomsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pers_msgs::msg::NuevoUsuariomsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__TRAITS_HPP_
