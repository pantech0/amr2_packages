// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roboi_amr_msgs:msg/Ststatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__STSTATUS__FUNCTIONS_H_
#define ROBOI_AMR_MSGS__MSG__DETAIL__STSTATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "roboi_amr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "roboi_amr_msgs/msg/detail/ststatus__struct.h"

/// Initialize msg/Ststatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roboi_amr_msgs__msg__Ststatus
 * )) before or use
 * roboi_amr_msgs__msg__Ststatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
bool
roboi_amr_msgs__msg__Ststatus__init(roboi_amr_msgs__msg__Ststatus * msg);

/// Finalize msg/Ststatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
void
roboi_amr_msgs__msg__Ststatus__fini(roboi_amr_msgs__msg__Ststatus * msg);

/// Create msg/Ststatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roboi_amr_msgs__msg__Ststatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
roboi_amr_msgs__msg__Ststatus *
roboi_amr_msgs__msg__Ststatus__create();

/// Destroy msg/Ststatus message.
/**
 * It calls
 * roboi_amr_msgs__msg__Ststatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
void
roboi_amr_msgs__msg__Ststatus__destroy(roboi_amr_msgs__msg__Ststatus * msg);

/// Check for msg/Ststatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
bool
roboi_amr_msgs__msg__Ststatus__are_equal(const roboi_amr_msgs__msg__Ststatus * lhs, const roboi_amr_msgs__msg__Ststatus * rhs);

/// Copy a msg/Ststatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
bool
roboi_amr_msgs__msg__Ststatus__copy(
  const roboi_amr_msgs__msg__Ststatus * input,
  roboi_amr_msgs__msg__Ststatus * output);

/// Initialize array of msg/Ststatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * roboi_amr_msgs__msg__Ststatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
bool
roboi_amr_msgs__msg__Ststatus__Sequence__init(roboi_amr_msgs__msg__Ststatus__Sequence * array, size_t size);

/// Finalize array of msg/Ststatus messages.
/**
 * It calls
 * roboi_amr_msgs__msg__Ststatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
void
roboi_amr_msgs__msg__Ststatus__Sequence__fini(roboi_amr_msgs__msg__Ststatus__Sequence * array);

/// Create array of msg/Ststatus messages.
/**
 * It allocates the memory for the array and calls
 * roboi_amr_msgs__msg__Ststatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
roboi_amr_msgs__msg__Ststatus__Sequence *
roboi_amr_msgs__msg__Ststatus__Sequence__create(size_t size);

/// Destroy array of msg/Ststatus messages.
/**
 * It calls
 * roboi_amr_msgs__msg__Ststatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
void
roboi_amr_msgs__msg__Ststatus__Sequence__destroy(roboi_amr_msgs__msg__Ststatus__Sequence * array);

/// Check for msg/Ststatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
bool
roboi_amr_msgs__msg__Ststatus__Sequence__are_equal(const roboi_amr_msgs__msg__Ststatus__Sequence * lhs, const roboi_amr_msgs__msg__Ststatus__Sequence * rhs);

/// Copy an array of msg/Ststatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_roboi_amr_msgs
bool
roboi_amr_msgs__msg__Ststatus__Sequence__copy(
  const roboi_amr_msgs__msg__Ststatus__Sequence * input,
  roboi_amr_msgs__msg__Ststatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__STSTATUS__FUNCTIONS_H_
