// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pers_msgs:msg/Caramsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pers_msgs/msg/detail/caramsg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pers_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Caramsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pers_msgs::msg::Caramsg(_init);
}

void Caramsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pers_msgs::msg::Caramsg *>(message_memory);
  typed_message->~Caramsg();
}

size_t size_function__Caramsg__caras(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Caramsg__caras(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__Caramsg__caras(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__Caramsg__caras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__Caramsg__caras(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__Caramsg__caras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__Caramsg__caras(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__Caramsg__caras(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Caramsg__top(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Caramsg__top(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Caramsg__top(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Caramsg__top(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Caramsg__top(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Caramsg__top(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Caramsg__top(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__Caramsg__top(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Caramsg__right(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Caramsg__right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Caramsg__right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Caramsg__right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Caramsg__right(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Caramsg__right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Caramsg__right(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__Caramsg__right(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Caramsg__bottom(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Caramsg__bottom(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Caramsg__bottom(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Caramsg__bottom(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Caramsg__bottom(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Caramsg__bottom(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Caramsg__bottom(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__Caramsg__bottom(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Caramsg__left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Caramsg__left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Caramsg__left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Caramsg__left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Caramsg__left(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Caramsg__left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Caramsg__left(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__Caramsg__left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Caramsg__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Caramsg__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Caramsg__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Caramsg__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Caramsg__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Caramsg__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Caramsg__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Caramsg__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Caramsg_message_member_array[7] = {
  {
    "caras",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::Caramsg, caras),  // bytes offset in struct
    nullptr,  // default value
    size_function__Caramsg__caras,  // size() function pointer
    get_const_function__Caramsg__caras,  // get_const(index) function pointer
    get_function__Caramsg__caras,  // get(index) function pointer
    fetch_function__Caramsg__caras,  // fetch(index, &value) function pointer
    assign_function__Caramsg__caras,  // assign(index, value) function pointer
    resize_function__Caramsg__caras  // resize(index) function pointer
  },
  {
    "frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::Caramsg, frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "top",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::Caramsg, top),  // bytes offset in struct
    nullptr,  // default value
    size_function__Caramsg__top,  // size() function pointer
    get_const_function__Caramsg__top,  // get_const(index) function pointer
    get_function__Caramsg__top,  // get(index) function pointer
    fetch_function__Caramsg__top,  // fetch(index, &value) function pointer
    assign_function__Caramsg__top,  // assign(index, value) function pointer
    resize_function__Caramsg__top  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::Caramsg, right),  // bytes offset in struct
    nullptr,  // default value
    size_function__Caramsg__right,  // size() function pointer
    get_const_function__Caramsg__right,  // get_const(index) function pointer
    get_function__Caramsg__right,  // get(index) function pointer
    fetch_function__Caramsg__right,  // fetch(index, &value) function pointer
    assign_function__Caramsg__right,  // assign(index, value) function pointer
    resize_function__Caramsg__right  // resize(index) function pointer
  },
  {
    "bottom",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::Caramsg, bottom),  // bytes offset in struct
    nullptr,  // default value
    size_function__Caramsg__bottom,  // size() function pointer
    get_const_function__Caramsg__bottom,  // get_const(index) function pointer
    get_function__Caramsg__bottom,  // get(index) function pointer
    fetch_function__Caramsg__bottom,  // fetch(index, &value) function pointer
    assign_function__Caramsg__bottom,  // assign(index, value) function pointer
    resize_function__Caramsg__bottom  // resize(index) function pointer
  },
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::Caramsg, left),  // bytes offset in struct
    nullptr,  // default value
    size_function__Caramsg__left,  // size() function pointer
    get_const_function__Caramsg__left,  // get_const(index) function pointer
    get_function__Caramsg__left,  // get(index) function pointer
    fetch_function__Caramsg__left,  // fetch(index, &value) function pointer
    assign_function__Caramsg__left,  // assign(index, value) function pointer
    resize_function__Caramsg__left  // resize(index) function pointer
  },
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::Caramsg, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__Caramsg__names,  // size() function pointer
    get_const_function__Caramsg__names,  // get_const(index) function pointer
    get_function__Caramsg__names,  // get(index) function pointer
    fetch_function__Caramsg__names,  // fetch(index, &value) function pointer
    assign_function__Caramsg__names,  // assign(index, value) function pointer
    resize_function__Caramsg__names  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Caramsg_message_members = {
  "pers_msgs::msg",  // message namespace
  "Caramsg",  // message name
  7,  // number of fields
  sizeof(pers_msgs::msg::Caramsg),
  Caramsg_message_member_array,  // message members
  Caramsg_init_function,  // function to initialize message memory (memory has to be allocated)
  Caramsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Caramsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Caramsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pers_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pers_msgs::msg::Caramsg>()
{
  return &::pers_msgs::msg::rosidl_typesupport_introspection_cpp::Caramsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pers_msgs, msg, Caramsg)() {
  return &::pers_msgs::msg::rosidl_typesupport_introspection_cpp::Caramsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif