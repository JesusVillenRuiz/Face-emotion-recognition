// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pers_msgs:msg/Facemsg.idl
// generated code does not contain a copyright notice

#ifndef PERS_MSGS__MSG__DETAIL__FACEMSG__FUNCTIONS_H_
#define PERS_MSGS__MSG__DETAIL__FACEMSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pers_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pers_msgs/msg/detail/facemsg__struct.h"

/// Initialize msg/Facemsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pers_msgs__msg__Facemsg
 * )) before or use
 * pers_msgs__msg__Facemsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
bool
pers_msgs__msg__Facemsg__init(pers_msgs__msg__Facemsg * msg);

/// Finalize msg/Facemsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
void
pers_msgs__msg__Facemsg__fini(pers_msgs__msg__Facemsg * msg);

/// Create msg/Facemsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pers_msgs__msg__Facemsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
pers_msgs__msg__Facemsg *
pers_msgs__msg__Facemsg__create();

/// Destroy msg/Facemsg message.
/**
 * It calls
 * pers_msgs__msg__Facemsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
void
pers_msgs__msg__Facemsg__destroy(pers_msgs__msg__Facemsg * msg);

/// Check for msg/Facemsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
bool
pers_msgs__msg__Facemsg__are_equal(const pers_msgs__msg__Facemsg * lhs, const pers_msgs__msg__Facemsg * rhs);

/// Copy a msg/Facemsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
bool
pers_msgs__msg__Facemsg__copy(
  const pers_msgs__msg__Facemsg * input,
  pers_msgs__msg__Facemsg * output);

/// Initialize array of msg/Facemsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * pers_msgs__msg__Facemsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
bool
pers_msgs__msg__Facemsg__Sequence__init(pers_msgs__msg__Facemsg__Sequence * array, size_t size);

/// Finalize array of msg/Facemsg messages.
/**
 * It calls
 * pers_msgs__msg__Facemsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
void
pers_msgs__msg__Facemsg__Sequence__fini(pers_msgs__msg__Facemsg__Sequence * array);

/// Create array of msg/Facemsg messages.
/**
 * It allocates the memory for the array and calls
 * pers_msgs__msg__Facemsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
pers_msgs__msg__Facemsg__Sequence *
pers_msgs__msg__Facemsg__Sequence__create(size_t size);

/// Destroy array of msg/Facemsg messages.
/**
 * It calls
 * pers_msgs__msg__Facemsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
void
pers_msgs__msg__Facemsg__Sequence__destroy(pers_msgs__msg__Facemsg__Sequence * array);

/// Check for msg/Facemsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
bool
pers_msgs__msg__Facemsg__Sequence__are_equal(const pers_msgs__msg__Facemsg__Sequence * lhs, const pers_msgs__msg__Facemsg__Sequence * rhs);

/// Copy an array of msg/Facemsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pers_msgs
bool
pers_msgs__msg__Facemsg__Sequence__copy(
  const pers_msgs__msg__Facemsg__Sequence * input,
  pers_msgs__msg__Facemsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PERS_MSGS__MSG__DETAIL__FACEMSG__FUNCTIONS_H_
