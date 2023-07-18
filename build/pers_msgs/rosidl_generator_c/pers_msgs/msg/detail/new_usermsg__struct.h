// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pers_msgs:msg/NewUsermsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__NEW_USERMSG__STRUCT_H_
#define PERS_MSGS__MSG__DETAIL__NEW_USERMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NewUsermsg in the package pers_msgs.
typedef struct pers_msgs__msg__NewUsermsg
{
  sensor_msgs__msg__Image frame;
  rosidl_runtime_c__String name;
} pers_msgs__msg__NewUsermsg;

// Struct for a sequence of pers_msgs__msg__NewUsermsg.
typedef struct pers_msgs__msg__NewUsermsg__Sequence
{
  pers_msgs__msg__NewUsermsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pers_msgs__msg__NewUsermsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERS_MSGS__MSG__DETAIL__NEW_USERMSG__STRUCT_H_
