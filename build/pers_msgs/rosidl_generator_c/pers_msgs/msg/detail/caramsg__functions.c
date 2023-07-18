// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pers_msgs:msg/Caramsg.idl
// generated code does not contain a copyright notice
#include "pers_msgs/msg/detail/caramsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `caras`
// Member `frame`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `top`
// Member `right`
// Member `bottom`
// Member `left`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

bool
pers_msgs__msg__Caramsg__init(pers_msgs__msg__Caramsg * msg)
{
  if (!msg) {
    return false;
  }
  // caras
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->caras, 0)) {
    pers_msgs__msg__Caramsg__fini(msg);
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__init(&msg->frame)) {
    pers_msgs__msg__Caramsg__fini(msg);
    return false;
  }
  // top
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->top, 0)) {
    pers_msgs__msg__Caramsg__fini(msg);
    return false;
  }
  // right
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->right, 0)) {
    pers_msgs__msg__Caramsg__fini(msg);
    return false;
  }
  // bottom
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->bottom, 0)) {
    pers_msgs__msg__Caramsg__fini(msg);
    return false;
  }
  // left
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->left, 0)) {
    pers_msgs__msg__Caramsg__fini(msg);
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    pers_msgs__msg__Caramsg__fini(msg);
    return false;
  }
  return true;
}

void
pers_msgs__msg__Caramsg__fini(pers_msgs__msg__Caramsg * msg)
{
  if (!msg) {
    return;
  }
  // caras
  sensor_msgs__msg__Image__Sequence__fini(&msg->caras);
  // frame
  sensor_msgs__msg__Image__fini(&msg->frame);
  // top
  rosidl_runtime_c__int64__Sequence__fini(&msg->top);
  // right
  rosidl_runtime_c__int64__Sequence__fini(&msg->right);
  // bottom
  rosidl_runtime_c__int64__Sequence__fini(&msg->bottom);
  // left
  rosidl_runtime_c__int64__Sequence__fini(&msg->left);
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
}

bool
pers_msgs__msg__Caramsg__are_equal(const pers_msgs__msg__Caramsg * lhs, const pers_msgs__msg__Caramsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // caras
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->caras), &(rhs->caras)))
  {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  // top
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->top), &(rhs->top)))
  {
    return false;
  }
  // right
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  // bottom
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->bottom), &(rhs->bottom)))
  {
    return false;
  }
  // left
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  return true;
}

bool
pers_msgs__msg__Caramsg__copy(
  const pers_msgs__msg__Caramsg * input,
  pers_msgs__msg__Caramsg * output)
{
  if (!input || !output) {
    return false;
  }
  // caras
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->caras), &(output->caras)))
  {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  // top
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->top), &(output->top)))
  {
    return false;
  }
  // right
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  // bottom
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->bottom), &(output->bottom)))
  {
    return false;
  }
  // left
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  return true;
}

pers_msgs__msg__Caramsg *
pers_msgs__msg__Caramsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pers_msgs__msg__Caramsg * msg = (pers_msgs__msg__Caramsg *)allocator.allocate(sizeof(pers_msgs__msg__Caramsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pers_msgs__msg__Caramsg));
  bool success = pers_msgs__msg__Caramsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pers_msgs__msg__Caramsg__destroy(pers_msgs__msg__Caramsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pers_msgs__msg__Caramsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pers_msgs__msg__Caramsg__Sequence__init(pers_msgs__msg__Caramsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pers_msgs__msg__Caramsg * data = NULL;

  if (size) {
    data = (pers_msgs__msg__Caramsg *)allocator.zero_allocate(size, sizeof(pers_msgs__msg__Caramsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pers_msgs__msg__Caramsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pers_msgs__msg__Caramsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pers_msgs__msg__Caramsg__Sequence__fini(pers_msgs__msg__Caramsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pers_msgs__msg__Caramsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pers_msgs__msg__Caramsg__Sequence *
pers_msgs__msg__Caramsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pers_msgs__msg__Caramsg__Sequence * array = (pers_msgs__msg__Caramsg__Sequence *)allocator.allocate(sizeof(pers_msgs__msg__Caramsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pers_msgs__msg__Caramsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pers_msgs__msg__Caramsg__Sequence__destroy(pers_msgs__msg__Caramsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pers_msgs__msg__Caramsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pers_msgs__msg__Caramsg__Sequence__are_equal(const pers_msgs__msg__Caramsg__Sequence * lhs, const pers_msgs__msg__Caramsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pers_msgs__msg__Caramsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pers_msgs__msg__Caramsg__Sequence__copy(
  const pers_msgs__msg__Caramsg__Sequence * input,
  pers_msgs__msg__Caramsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pers_msgs__msg__Caramsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pers_msgs__msg__Caramsg * data =
      (pers_msgs__msg__Caramsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pers_msgs__msg__Caramsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pers_msgs__msg__Caramsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pers_msgs__msg__Caramsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}