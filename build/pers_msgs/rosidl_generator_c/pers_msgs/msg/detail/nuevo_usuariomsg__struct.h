// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pers_msgs:msg/NuevoUsuariomsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__STRUCT_H_
#define PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__STRUCT_H_

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
// Member 'nombre'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NuevoUsuariomsg in the package pers_msgs.
typedef struct pers_msgs__msg__NuevoUsuariomsg
{
  sensor_msgs__msg__Image frame;
  rosidl_runtime_c__String nombre;
} pers_msgs__msg__NuevoUsuariomsg;

// Struct for a sequence of pers_msgs__msg__NuevoUsuariomsg.
typedef struct pers_msgs__msg__NuevoUsuariomsg__Sequence
{
  pers_msgs__msg__NuevoUsuariomsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pers_msgs__msg__NuevoUsuariomsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERS_MSGS__MSG__DETAIL__NUEVO_USUARIOMSG__STRUCT_H_
