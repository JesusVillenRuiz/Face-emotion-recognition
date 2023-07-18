// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pers_msgs:msg/NuevoUsuariomsg.idl
// generated code does not contain a copyright notice
#include "pers_msgs/msg/detail/nuevo_usuariomsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `nombre`
#include "rosidl_runtime_c/string_functions.h"

bool
pers_msgs__msg__NuevoUsuariomsg__init(pers_msgs__msg__NuevoUsuariomsg * msg)
{
  if (!msg) {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__init(&msg->frame)) {
    pers_msgs__msg__NuevoUsuariomsg__fini(msg);
    return false;
  }
  // nombre
  if (!rosidl_runtime_c__String__init(&msg->nombre)) {
    pers_msgs__msg__NuevoUsuariomsg__fini(msg);
    return false;
  }
  return true;
}

void
pers_msgs__msg__NuevoUsuariomsg__fini(pers_msgs__msg__NuevoUsuariomsg * msg)
{
  if (!msg) {
    return;
  }
  // frame
  sensor_msgs__msg__Image__fini(&msg->frame);
  // nombre
  rosidl_runtime_c__String__fini(&msg->nombre);
}

bool
pers_msgs__msg__NuevoUsuariomsg__are_equal(const pers_msgs__msg__NuevoUsuariomsg * lhs, const pers_msgs__msg__NuevoUsuariomsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  // nombre
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nombre), &(rhs->nombre)))
  {
    return false;
  }
  return true;
}

bool
pers_msgs__msg__NuevoUsuariomsg__copy(
  const pers_msgs__msg__NuevoUsuariomsg * input,
  pers_msgs__msg__NuevoUsuariomsg * output)
{
  if (!input || !output) {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  // nombre
  if (!rosidl_runtime_c__String__copy(
      &(input->nombre), &(output->nombre)))
  {
    return false;
  }
  return true;
}

pers_msgs__msg__NuevoUsuariomsg *
pers_msgs__msg__NuevoUsuariomsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pers_msgs__msg__NuevoUsuariomsg * msg = (pers_msgs__msg__NuevoUsuariomsg *)allocator.allocate(sizeof(pers_msgs__msg__NuevoUsuariomsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pers_msgs__msg__NuevoUsuariomsg));
  bool success = pers_msgs__msg__NuevoUsuariomsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pers_msgs__msg__NuevoUsuariomsg__destroy(pers_msgs__msg__NuevoUsuariomsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pers_msgs__msg__NuevoUsuariomsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pers_msgs__msg__NuevoUsuariomsg__Sequence__init(pers_msgs__msg__NuevoUsuariomsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pers_msgs__msg__NuevoUsuariomsg * data = NULL;

  if (size) {
    data = (pers_msgs__msg__NuevoUsuariomsg *)allocator.zero_allocate(size, sizeof(pers_msgs__msg__NuevoUsuariomsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pers_msgs__msg__NuevoUsuariomsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pers_msgs__msg__NuevoUsuariomsg__fini(&data[i - 1]);
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
pers_msgs__msg__NuevoUsuariomsg__Sequence__fini(pers_msgs__msg__NuevoUsuariomsg__Sequence * array)
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
      pers_msgs__msg__NuevoUsuariomsg__fini(&array->data[i]);
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

pers_msgs__msg__NuevoUsuariomsg__Sequence *
pers_msgs__msg__NuevoUsuariomsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pers_msgs__msg__NuevoUsuariomsg__Sequence * array = (pers_msgs__msg__NuevoUsuariomsg__Sequence *)allocator.allocate(sizeof(pers_msgs__msg__NuevoUsuariomsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pers_msgs__msg__NuevoUsuariomsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pers_msgs__msg__NuevoUsuariomsg__Sequence__destroy(pers_msgs__msg__NuevoUsuariomsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pers_msgs__msg__NuevoUsuariomsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pers_msgs__msg__NuevoUsuariomsg__Sequence__are_equal(const pers_msgs__msg__NuevoUsuariomsg__Sequence * lhs, const pers_msgs__msg__NuevoUsuariomsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pers_msgs__msg__NuevoUsuariomsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pers_msgs__msg__NuevoUsuariomsg__Sequence__copy(
  const pers_msgs__msg__NuevoUsuariomsg__Sequence * input,
  pers_msgs__msg__NuevoUsuariomsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pers_msgs__msg__NuevoUsuariomsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pers_msgs__msg__NuevoUsuariomsg * data =
      (pers_msgs__msg__NuevoUsuariomsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pers_msgs__msg__NuevoUsuariomsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pers_msgs__msg__NuevoUsuariomsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pers_msgs__msg__NuevoUsuariomsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
