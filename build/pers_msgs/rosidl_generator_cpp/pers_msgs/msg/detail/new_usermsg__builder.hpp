// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pers_msgs:msg/NewUsermsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__NEW_USERMSG__BUILDER_HPP_
#define PERS_MSGS__MSG__DETAIL__NEW_USERMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pers_msgs/msg/detail/new_usermsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pers_msgs
{

namespace msg
{

namespace builder
{

class Init_NewUsermsg_name
{
public:
  explicit Init_NewUsermsg_name(::pers_msgs::msg::NewUsermsg & msg)
  : msg_(msg)
  {}
  ::pers_msgs::msg::NewUsermsg name(::pers_msgs::msg::NewUsermsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pers_msgs::msg::NewUsermsg msg_;
};

class Init_NewUsermsg_frame
{
public:
  Init_NewUsermsg_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NewUsermsg_name frame(::pers_msgs::msg::NewUsermsg::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_NewUsermsg_name(msg_);
  }

private:
  ::pers_msgs::msg::NewUsermsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pers_msgs::msg::NewUsermsg>()
{
  return pers_msgs::msg::builder::Init_NewUsermsg_frame();
}

}  // namespace pers_msgs

#endif  // PERS_MSGS__MSG__DETAIL__NEW_USERMSG__BUILDER_HPP_
