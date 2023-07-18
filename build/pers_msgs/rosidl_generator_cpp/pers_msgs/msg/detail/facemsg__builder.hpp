// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pers_msgs:msg/Facemsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__FACEMSG__BUILDER_HPP_
#define PERS_MSGS__MSG__DETAIL__FACEMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pers_msgs/msg/detail/facemsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pers_msgs
{

namespace msg
{

namespace builder
{

class Init_Facemsg_names
{
public:
  explicit Init_Facemsg_names(::pers_msgs::msg::Facemsg & msg)
  : msg_(msg)
  {}
  ::pers_msgs::msg::Facemsg names(::pers_msgs::msg::Facemsg::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pers_msgs::msg::Facemsg msg_;
};

class Init_Facemsg_left
{
public:
  explicit Init_Facemsg_left(::pers_msgs::msg::Facemsg & msg)
  : msg_(msg)
  {}
  Init_Facemsg_names left(::pers_msgs::msg::Facemsg::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Facemsg_names(msg_);
  }

private:
  ::pers_msgs::msg::Facemsg msg_;
};

class Init_Facemsg_bottom
{
public:
  explicit Init_Facemsg_bottom(::pers_msgs::msg::Facemsg & msg)
  : msg_(msg)
  {}
  Init_Facemsg_left bottom(::pers_msgs::msg::Facemsg::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_Facemsg_left(msg_);
  }

private:
  ::pers_msgs::msg::Facemsg msg_;
};

class Init_Facemsg_right
{
public:
  explicit Init_Facemsg_right(::pers_msgs::msg::Facemsg & msg)
  : msg_(msg)
  {}
  Init_Facemsg_bottom right(::pers_msgs::msg::Facemsg::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_Facemsg_bottom(msg_);
  }

private:
  ::pers_msgs::msg::Facemsg msg_;
};

class Init_Facemsg_top
{
public:
  explicit Init_Facemsg_top(::pers_msgs::msg::Facemsg & msg)
  : msg_(msg)
  {}
  Init_Facemsg_right top(::pers_msgs::msg::Facemsg::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_Facemsg_right(msg_);
  }

private:
  ::pers_msgs::msg::Facemsg msg_;
};

class Init_Facemsg_frame
{
public:
  explicit Init_Facemsg_frame(::pers_msgs::msg::Facemsg & msg)
  : msg_(msg)
  {}
  Init_Facemsg_top frame(::pers_msgs::msg::Facemsg::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_Facemsg_top(msg_);
  }

private:
  ::pers_msgs::msg::Facemsg msg_;
};

class Init_Facemsg_faces
{
public:
  Init_Facemsg_faces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Facemsg_frame faces(::pers_msgs::msg::Facemsg::_faces_type arg)
  {
    msg_.faces = std::move(arg);
    return Init_Facemsg_frame(msg_);
  }

private:
  ::pers_msgs::msg::Facemsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pers_msgs::msg::Facemsg>()
{
  return pers_msgs::msg::builder::Init_Facemsg_faces();
}

}  // namespace pers_msgs

#endif  // PERS_MSGS__MSG__DETAIL__FACEMSG__BUILDER_HPP_
