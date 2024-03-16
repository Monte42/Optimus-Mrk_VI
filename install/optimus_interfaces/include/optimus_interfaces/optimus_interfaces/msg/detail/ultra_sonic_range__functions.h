// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from optimus_interfaces:msg/UltraSonicRange.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__FUNCTIONS_H_
#define OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "optimus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "optimus_interfaces/msg/detail/ultra_sonic_range__struct.h"

/// Initialize msg/UltraSonicRange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__msg__UltraSonicRange
 * )) before or use
 * optimus_interfaces__msg__UltraSonicRange__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__msg__UltraSonicRange__init(optimus_interfaces__msg__UltraSonicRange * msg);

/// Finalize msg/UltraSonicRange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__msg__UltraSonicRange__fini(optimus_interfaces__msg__UltraSonicRange * msg);

/// Create msg/UltraSonicRange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__msg__UltraSonicRange__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__msg__UltraSonicRange *
optimus_interfaces__msg__UltraSonicRange__create();

/// Destroy msg/UltraSonicRange message.
/**
 * It calls
 * optimus_interfaces__msg__UltraSonicRange__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__msg__UltraSonicRange__destroy(optimus_interfaces__msg__UltraSonicRange * msg);

/// Check for msg/UltraSonicRange message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__msg__UltraSonicRange__are_equal(const optimus_interfaces__msg__UltraSonicRange * lhs, const optimus_interfaces__msg__UltraSonicRange * rhs);

/// Copy a msg/UltraSonicRange message.
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
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__msg__UltraSonicRange__copy(
  const optimus_interfaces__msg__UltraSonicRange * input,
  optimus_interfaces__msg__UltraSonicRange * output);

/// Initialize array of msg/UltraSonicRange messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__msg__UltraSonicRange__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__msg__UltraSonicRange__Sequence__init(optimus_interfaces__msg__UltraSonicRange__Sequence * array, size_t size);

/// Finalize array of msg/UltraSonicRange messages.
/**
 * It calls
 * optimus_interfaces__msg__UltraSonicRange__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__msg__UltraSonicRange__Sequence__fini(optimus_interfaces__msg__UltraSonicRange__Sequence * array);

/// Create array of msg/UltraSonicRange messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__msg__UltraSonicRange__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__msg__UltraSonicRange__Sequence *
optimus_interfaces__msg__UltraSonicRange__Sequence__create(size_t size);

/// Destroy array of msg/UltraSonicRange messages.
/**
 * It calls
 * optimus_interfaces__msg__UltraSonicRange__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__msg__UltraSonicRange__Sequence__destroy(optimus_interfaces__msg__UltraSonicRange__Sequence * array);

/// Check for msg/UltraSonicRange message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__msg__UltraSonicRange__Sequence__are_equal(const optimus_interfaces__msg__UltraSonicRange__Sequence * lhs, const optimus_interfaces__msg__UltraSonicRange__Sequence * rhs);

/// Copy an array of msg/UltraSonicRange messages.
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
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__msg__UltraSonicRange__Sequence__copy(
  const optimus_interfaces__msg__UltraSonicRange__Sequence * input,
  optimus_interfaces__msg__UltraSonicRange__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__ULTRA_SONIC_RANGE__FUNCTIONS_H_
