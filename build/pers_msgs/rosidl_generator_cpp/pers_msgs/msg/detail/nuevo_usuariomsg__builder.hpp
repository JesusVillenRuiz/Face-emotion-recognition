// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pers_msgs:msg/NuevoUsuariomsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__BUILDER_HPP_
#define PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pers_msgs/msg/detail/nuevo_usuariomsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pers_msgs
{

namespace msg
{

namespace builder
{

class Init_NuevoUsuariomsg_nombre
{
public:
  explicit Init_NuevoUsuariomsg_nombre(::pers_msgs::msg::NuevoUsuariomsg & msg)
  : msg_(msg)
  {}
  ::pers_msgs::msg::NuevoUsuariomsg nombre(::pers_msgs::msg::NuevoUsuariomsg::_nombre_type arg)
  {
    msg_.nombre = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pers_msgs::msg::NuevoUsuariomsg msg_;
};

class Init_NuevoUsuariomsg_frame
{
public:
  Init_NuevoUsuariomsg_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NuevoUsuariomsg_nombre frame(::pers_msgs::msg::NuevoUsuariomsg::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_NuevoUsuariomsg_nombre(msg_);
  }

private:
  ::pers_msgs::msg::NuevoUsuariomsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pers_msgs::msg::NuevoUsuariomsg>()
{
  return pers_msgs::msg::builder::Init_NuevoUsuariomsg_frame();
}

}  // namespace pers_msgs

#endif  // PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__BUILDER_HPP_
