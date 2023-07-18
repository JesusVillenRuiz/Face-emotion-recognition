// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pers_msgs:msg/NuevoUsuariomsg.idl
// generated code does not contain a copyright notice
#include "pers_msgs/msg/detail/nuevo_usuariomsg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pers_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pers_msgs/msg/detail/nuevo_usuariomsg__struct.h"
#include "pers_msgs/msg/detail/nuevo_usuariomsg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // nombre
#include "rosidl_runtime_c/string_functions.h"  // nombre
#include "sensor_msgs/msg/detail/image__functions.h"  // frame

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pers_msgs
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pers_msgs
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pers_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _NuevoUsuariomsg__ros_msg_type = pers_msgs__msg__NuevoUsuariomsg;

static bool _NuevoUsuariomsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NuevoUsuariomsg__ros_msg_type * ros_message = static_cast<const _NuevoUsuariomsg__ros_msg_type *>(untyped_ros_message);
  // Field name: frame
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->frame, cdr))
    {
      return false;
    }
  }

  // Field name: nombre
  {
    const rosidl_runtime_c__String * str = &ros_message->nombre;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _NuevoUsuariomsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NuevoUsuariomsg__ros_msg_type * ros_message = static_cast<_NuevoUsuariomsg__ros_msg_type *>(untyped_ros_message);
  // Field name: frame
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->frame))
    {
      return false;
    }
  }

  // Field name: nombre
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->nombre.data) {
      rosidl_runtime_c__String__init(&ros_message->nombre);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->nombre,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'nombre'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pers_msgs
size_t get_serialized_size_pers_msgs__msg__NuevoUsuariomsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NuevoUsuariomsg__ros_msg_type * ros_message = static_cast<const _NuevoUsuariomsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name frame

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->frame), current_alignment);
  // field.name nombre
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nombre.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _NuevoUsuariomsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pers_msgs__msg__NuevoUsuariomsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pers_msgs
size_t max_serialized_size_pers_msgs__msg__NuevoUsuariomsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: frame
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nombre
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NuevoUsuariomsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pers_msgs__msg__NuevoUsuariomsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NuevoUsuariomsg = {
  "pers_msgs::msg",
  "NuevoUsuariomsg",
  _NuevoUsuariomsg__cdr_serialize,
  _NuevoUsuariomsg__cdr_deserialize,
  _NuevoUsuariomsg__get_serialized_size,
  _NuevoUsuariomsg__max_serialized_size
};

static rosidl_message_type_support_t _NuevoUsuariomsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NuevoUsuariomsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pers_msgs, msg, NuevoUsuariomsg)() {
  return &_NuevoUsuariomsg__type_support;
}

#if defined(__cplusplus)
}
#endif
