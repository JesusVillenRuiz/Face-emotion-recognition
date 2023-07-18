// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pers_msgs:msg/Facemsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__FACEMSG__STRUCT_H_
#define PERS_MSGS__MSG__DETAIL__FACEMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'faces'
// Member 'frame'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'top'
// Member 'right'
// Member 'bottom'
// Member 'left'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Facemsg in the package pers_msgs.
typedef struct pers_msgs__msg__Facemsg
{
  sensor_msgs__msg__Image__Sequence faces;
  sensor_msgs__msg__Image frame;
  rosidl_runtime_c__int64__Sequence top;
  rosidl_runtime_c__int64__Sequence right;
  rosidl_runtime_c__int64__Sequence bottom;
  rosidl_runtime_c__int64__Sequence left;
  rosidl_runtime_c__String__Sequence names;
} pers_msgs__msg__Facemsg;

// Struct for a sequence of pers_msgs__msg__Facemsg.
typedef struct pers_msgs__msg__Facemsg__Sequence
{
  pers_msgs__msg__Facemsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pers_msgs__msg__Facemsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERS_MSGS__MSG__DETAIL__FACEMSG__STRUCT_H_
