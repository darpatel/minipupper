// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__FUNCTIONS_H_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mini_pupper_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mini_pupper_interfaces/msg/detail/line_detection_result__struct.h"

/// Initialize msg/LineDetectionResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mini_pupper_interfaces__msg__LineDetectionResult
 * )) before or use
 * mini_pupper_interfaces__msg__LineDetectionResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
bool
mini_pupper_interfaces__msg__LineDetectionResult__init(mini_pupper_interfaces__msg__LineDetectionResult * msg);

/// Finalize msg/LineDetectionResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
void
mini_pupper_interfaces__msg__LineDetectionResult__fini(mini_pupper_interfaces__msg__LineDetectionResult * msg);

/// Create msg/LineDetectionResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mini_pupper_interfaces__msg__LineDetectionResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
mini_pupper_interfaces__msg__LineDetectionResult *
mini_pupper_interfaces__msg__LineDetectionResult__create();

/// Destroy msg/LineDetectionResult message.
/**
 * It calls
 * mini_pupper_interfaces__msg__LineDetectionResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
void
mini_pupper_interfaces__msg__LineDetectionResult__destroy(mini_pupper_interfaces__msg__LineDetectionResult * msg);

/// Check for msg/LineDetectionResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
bool
mini_pupper_interfaces__msg__LineDetectionResult__are_equal(const mini_pupper_interfaces__msg__LineDetectionResult * lhs, const mini_pupper_interfaces__msg__LineDetectionResult * rhs);

/// Copy a msg/LineDetectionResult message.
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
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
bool
mini_pupper_interfaces__msg__LineDetectionResult__copy(
  const mini_pupper_interfaces__msg__LineDetectionResult * input,
  mini_pupper_interfaces__msg__LineDetectionResult * output);

/// Initialize array of msg/LineDetectionResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * mini_pupper_interfaces__msg__LineDetectionResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
bool
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__init(mini_pupper_interfaces__msg__LineDetectionResult__Sequence * array, size_t size);

/// Finalize array of msg/LineDetectionResult messages.
/**
 * It calls
 * mini_pupper_interfaces__msg__LineDetectionResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
void
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__fini(mini_pupper_interfaces__msg__LineDetectionResult__Sequence * array);

/// Create array of msg/LineDetectionResult messages.
/**
 * It allocates the memory for the array and calls
 * mini_pupper_interfaces__msg__LineDetectionResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
mini_pupper_interfaces__msg__LineDetectionResult__Sequence *
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__create(size_t size);

/// Destroy array of msg/LineDetectionResult messages.
/**
 * It calls
 * mini_pupper_interfaces__msg__LineDetectionResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
void
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__destroy(mini_pupper_interfaces__msg__LineDetectionResult__Sequence * array);

/// Check for msg/LineDetectionResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
bool
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__are_equal(const mini_pupper_interfaces__msg__LineDetectionResult__Sequence * lhs, const mini_pupper_interfaces__msg__LineDetectionResult__Sequence * rhs);

/// Copy an array of msg/LineDetectionResult messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mini_pupper_interfaces
bool
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__copy(
  const mini_pupper_interfaces__msg__LineDetectionResult__Sequence * input,
  mini_pupper_interfaces__msg__LineDetectionResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__FUNCTIONS_H_
