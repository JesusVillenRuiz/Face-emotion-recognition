// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pers_msgs:msg/Facemsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__FACEMSG__TRAITS_HPP_
#define PERS_MSGS__MSG__DETAIL__FACEMSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pers_msgs/msg/detail/facemsg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'faces'
// Member 'frame'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace pers_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Facemsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: faces
  {
    if (msg.faces.size() == 0) {
      out << "faces: []";
    } else {
      out << "faces: [";
      size_t pending_items = msg.faces.size();
      for (auto item : msg.faces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
    out << ", ";
  }

  // member: top
  {
    if (msg.top.size() == 0) {
      out << "top: []";
    } else {
      out << "top: [";
      size_t pending_items = msg.top.size();
      for (auto item : msg.top) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right
  {
    if (msg.right.size() == 0) {
      out << "right: []";
    } else {
      out << "right: [";
      size_t pending_items = msg.right.size();
      for (auto item : msg.right) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bottom
  {
    if (msg.bottom.size() == 0) {
      out << "bottom: []";
    } else {
      out << "bottom: [";
      size_t pending_items = msg.bottom.size();
      for (auto item : msg.bottom) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left
  {
    if (msg.left.size() == 0) {
      out << "left: []";
    } else {
      out << "left: [";
      size_t pending_items = msg.left.size();
      for (auto item : msg.left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Facemsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: faces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faces.size() == 0) {
      out << "faces: []\n";
    } else {
      out << "faces:\n";
      for (auto item : msg.faces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame:\n";
    to_block_style_yaml(msg.frame, out, indentation + 2);
  }

  // member: top
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.top.size() == 0) {
      out << "top: []\n";
    } else {
      out << "top:\n";
      for (auto item : msg.top) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right.size() == 0) {
      out << "right: []\n";
    } else {
      out << "right:\n";
      for (auto item : msg.right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bottom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bottom.size() == 0) {
      out << "bottom: []\n";
    } else {
      out << "bottom:\n";
      for (auto item : msg.bottom) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left.size() == 0) {
      out << "left: []\n";
    } else {
      out << "left:\n";
      for (auto item : msg.left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Facemsg & msg, bool use_flow_style = false)
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
  const pers_msgs::msg::Facemsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  pers_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pers_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pers_msgs::msg::Facemsg & msg)
{
  return pers_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pers_msgs::msg::Facemsg>()
{
  return "pers_msgs::msg::Facemsg";
}

template<>
inline const char * name<pers_msgs::msg::Facemsg>()
{
  return "pers_msgs/msg/Facemsg";
}

template<>
struct has_fixed_size<pers_msgs::msg::Facemsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pers_msgs::msg::Facemsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pers_msgs::msg::Facemsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERS_MSGS__MSG__DETAIL__FACEMSG__TRAITS_HPP_
