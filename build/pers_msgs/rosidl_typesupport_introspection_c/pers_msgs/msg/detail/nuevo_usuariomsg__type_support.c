// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pers_msgs:msg/NuevoUsuariomsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pers_msgs/msg/detail/nuevo_usuariomsg__rosidl_typesupport_introspection_c.h"
#include "pers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pers_msgs/msg/detail/nuevo_usuariomsg__functions.h"
#include "pers_msgs/msg/detail/nuevo_usuariomsg__struct.h"


// Include directives for member types
// Member `frame`
#include "sensor_msgs/msg/image.h"
// Member `frame`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `nombre`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pers_msgs__msg__NuevoUsuariomsg__init(message_memory);
}

void pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_fini_function(void * message_memory)
{
  pers_msgs__msg__NuevoUsuariomsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_member_array[2] = {
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__NuevoUsuariomsg, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nombre",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__NuevoUsuariomsg, nombre),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_members = {
  "pers_msgs__msg",  // message namespace
  "NuevoUsuariomsg",  // message name
  2,  // number of fields
  sizeof(pers_msgs__msg__NuevoUsuariomsg),
  pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_member_array,  // message members
  pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_init_function,  // function to initialize message memory (memory has to be allocated)
  pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_type_support_handle = {
  0,
  &pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pers_msgs, msg, NuevoUsuariomsg)() {
  pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_type_support_handle.typesupport_identifier) {
    pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pers_msgs__msg__NuevoUsuariomsg__rosidl_typesupport_introspection_c__NuevoUsuariomsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
