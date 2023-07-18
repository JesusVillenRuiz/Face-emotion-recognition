// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pers_msgs:msg/NewUsermsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pers_msgs/msg/detail/new_usermsg__struct.hpp"
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

void NewUsermsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pers_msgs::msg::NewUsermsg(_init);
}

void NewUsermsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pers_msgs::msg::NewUsermsg *>(message_memory);
  typed_message->~NewUsermsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NewUsermsg_message_member_array[2] = {
  {
    "frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::NewUsermsg, frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs::msg::NewUsermsg, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NewUsermsg_message_members = {
  "pers_msgs::msg",  // message namespace
  "NewUsermsg",  // message name
  2,  // number of fields
  sizeof(pers_msgs::msg::NewUsermsg),
  NewUsermsg_message_member_array,  // message members
  NewUsermsg_init_function,  // function to initialize message memory (memory has to be allocated)
  NewUsermsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NewUsermsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NewUsermsg_message_members,
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
get_message_type_support_handle<pers_msgs::msg::NewUsermsg>()
{
  return &::pers_msgs::msg::rosidl_typesupport_introspection_cpp::NewUsermsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pers_msgs, msg, NewUsermsg)() {
  return &::pers_msgs::msg::rosidl_typesupport_introspection_cpp::NewUsermsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
