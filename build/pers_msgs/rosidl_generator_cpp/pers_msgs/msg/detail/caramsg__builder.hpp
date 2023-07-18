// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pers_msgs:msg/Caramsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__CARAMSG__BUILDER_HPP_
#define PERS_MSGS__MSG__DETAIL__CARAMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pers_msgs/msg/detail/caramsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pers_msgs
{

namespace msg
{

namespace builder
{

class Init_Caramsg_names
{
public:
  explicit Init_Caramsg_names(::pers_msgs::msg::Caramsg & msg)
  : msg_(msg)
  {}
  ::pers_msgs::msg::Caramsg names(::pers_msgs::msg::Caramsg::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pers_msgs::msg::Caramsg msg_;
};

class Init_Caramsg_left
{
public:
  explicit Init_Caramsg_left(::pers_msgs::msg::Caramsg & msg)
  : msg_(msg)
  {}
  Init_Caramsg_names left(::pers_msgs::msg::Caramsg::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Caramsg_names(msg_);
  }

private:
  ::pers_msgs::msg::Caramsg msg_;
};

class Init_Caramsg_bottom
{
public:
  explicit Init_Caramsg_bottom(::pers_msgs::msg::Caramsg & msg)
  : msg_(msg)
  {}
  Init_Caramsg_left bottom(::pers_msgs::msg::Caramsg::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_Caramsg_left(msg_);
  }

private:
  ::pers_msgs::msg::Caramsg msg_;
};

class Init_Caramsg_right
{
public:
  explicit Init_Caramsg_right(::pers_msgs::msg::Caramsg & msg)
  : msg_(msg)
  {}
  Init_Caramsg_bottom right(::pers_msgs::msg::Caramsg::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_Caramsg_bottom(msg_);
  }

private:
  ::pers_msgs::msg::Caramsg msg_;
};

class Init_Caramsg_top
{
public:
  explicit Init_Caramsg_top(::pers_msgs::msg::Caramsg & msg)
  : msg_(msg)
  {}
  Init_Caramsg_right top(::pers_msgs::msg::Caramsg::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_Caramsg_right(msg_);
  }

private:
  ::pers_msgs::msg::Caramsg msg_;
};

class Init_Caramsg_frame
{
public:
  explicit Init_Caramsg_frame(::pers_msgs::msg::Caramsg & msg)
  : msg_(msg)
  {}
  Init_Caramsg_top frame(::pers_msgs::msg::Caramsg::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_Caramsg_top(msg_);
  }

private:
  ::pers_msgs::msg::Caramsg msg_;
};

class Init_Caramsg_caras
{
public:
  Init_Caramsg_caras()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Caramsg_frame caras(::pers_msgs::msg::Caramsg::_caras_type arg)
  {
    msg_.caras = std::move(arg);
    return Init_Caramsg_frame(msg_);
  }

private:
  ::pers_msgs::msg::Caramsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pers_msgs::msg::Caramsg>()
{
  return pers_msgs::msg::builder::Init_Caramsg_caras();
}

}  // namespace pers_msgs

#endif  // PERS_MSGS__MSG__DETAIL__CARAMSG__BUILDER_HPP_
