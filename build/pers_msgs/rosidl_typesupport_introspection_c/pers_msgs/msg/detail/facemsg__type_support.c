// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pers_msgs:msg/Facemsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pers_msgs/msg/detail/facemsg__rosidl_typesupport_introspection_c.h"
#include "pers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pers_msgs/msg/detail/facemsg__functions.h"
#include "pers_msgs/msg/detail/facemsg__struct.h"


// Include directives for member types
// Member `faces`
// Member `frame`
#include "sensor_msgs/msg/image.h"
// Member `faces`
// Member `frame`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `top`
// Member `right`
// Member `bottom`
// Member `left`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pers_msgs__msg__Facemsg__init(message_memory);
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_fini_function(void * message_memory)
{
  pers_msgs__msg__Facemsg__fini(message_memory);
}

size_t pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__faces(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__faces(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__faces(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__faces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__faces(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__faces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__faces(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__faces(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__top(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__top(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__top(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__top(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__top(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__top(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__top(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__top(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__right(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__right(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__right(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__right(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__right(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__right(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__bottom(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__bottom(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__bottom(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__bottom(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__bottom(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__bottom(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__bottom(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__bottom(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__left(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__left(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__left(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__left(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__left(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__left(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_member_array[7] = {
  {
    "faces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__Facemsg, faces),  // bytes offset in struct
    NULL,  // default value
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__faces,  // size() function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__faces,  // get_const(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__faces,  // get(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__faces,  // fetch(index, &value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__faces,  // assign(index, value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__faces  // resize(index) function pointer
  },
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__Facemsg, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__Facemsg, top),  // bytes offset in struct
    NULL,  // default value
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__top,  // size() function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__top,  // get_const(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__top,  // get(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__top,  // fetch(index, &value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__top,  // assign(index, value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__top  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__Facemsg, right),  // bytes offset in struct
    NULL,  // default value
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__right,  // size() function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__right,  // get_const(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__right,  // get(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__right,  // fetch(index, &value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__right,  // assign(index, value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__right  // resize(index) function pointer
  },
  {
    "bottom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__Facemsg, bottom),  // bytes offset in struct
    NULL,  // default value
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__bottom,  // size() function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__bottom,  // get_const(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__bottom,  // get(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__bottom,  // fetch(index, &value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__bottom,  // assign(index, value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__bottom  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__Facemsg, left),  // bytes offset in struct
    NULL,  // default value
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__left,  // size() function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__left,  // get_const(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__left,  // get(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__left,  // fetch(index, &value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__left,  // assign(index, value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__left  // resize(index) function pointer
  },
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pers_msgs__msg__Facemsg, names),  // bytes offset in struct
    NULL,  // default value
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__size_function__Facemsg__names,  // size() function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_const_function__Facemsg__names,  // get_const(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__get_function__Facemsg__names,  // get(index) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__fetch_function__Facemsg__names,  // fetch(index, &value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__assign_function__Facemsg__names,  // assign(index, value) function pointer
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__resize_function__Facemsg__names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_members = {
  "pers_msgs__msg",  // message namespace
  "Facemsg",  // message name
  7,  // number of fields
  sizeof(pers_msgs__msg__Facemsg),
  pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_member_array,  // message members
  pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_init_function,  // function to initialize message memory (memory has to be allocated)
  pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_type_support_handle = {
  0,
  &pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pers_msgs, msg, Facemsg)() {
  pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_type_support_handle.typesupport_identifier) {
    pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pers_msgs__msg__Facemsg__rosidl_typesupport_introspection_c__Facemsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
