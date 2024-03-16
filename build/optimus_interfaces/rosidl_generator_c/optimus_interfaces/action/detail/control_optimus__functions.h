// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from optimus_interfaces:action/ControlOptimus.idl
// generated code does not contain a copyright notice

#ifndef OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__FUNCTIONS_H_
#define OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "optimus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "optimus_interfaces/action/detail/control_optimus__struct.h"

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_Goal
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Goal__init(optimus_interfaces__action__ControlOptimus_Goal * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Goal__fini(optimus_interfaces__action__ControlOptimus_Goal * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_Goal *
optimus_interfaces__action__ControlOptimus_Goal__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Goal__destroy(optimus_interfaces__action__ControlOptimus_Goal * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Goal__are_equal(const optimus_interfaces__action__ControlOptimus_Goal * lhs, const optimus_interfaces__action__ControlOptimus_Goal * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_Goal__copy(
  const optimus_interfaces__action__ControlOptimus_Goal * input,
  optimus_interfaces__action__ControlOptimus_Goal * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Goal__Sequence__init(optimus_interfaces__action__ControlOptimus_Goal__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Goal__Sequence__fini(optimus_interfaces__action__ControlOptimus_Goal__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_Goal__Sequence *
optimus_interfaces__action__ControlOptimus_Goal__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Goal__Sequence__destroy(optimus_interfaces__action__ControlOptimus_Goal__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Goal__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_Goal__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_Goal__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_Goal__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_Goal__Sequence * input,
  optimus_interfaces__action__ControlOptimus_Goal__Sequence * output);

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_Result
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Result__init(optimus_interfaces__action__ControlOptimus_Result * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Result__fini(optimus_interfaces__action__ControlOptimus_Result * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_Result *
optimus_interfaces__action__ControlOptimus_Result__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Result__destroy(optimus_interfaces__action__ControlOptimus_Result * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Result__are_equal(const optimus_interfaces__action__ControlOptimus_Result * lhs, const optimus_interfaces__action__ControlOptimus_Result * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_Result__copy(
  const optimus_interfaces__action__ControlOptimus_Result * input,
  optimus_interfaces__action__ControlOptimus_Result * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Result__Sequence__init(optimus_interfaces__action__ControlOptimus_Result__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Result__Sequence__fini(optimus_interfaces__action__ControlOptimus_Result__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_Result__Sequence *
optimus_interfaces__action__ControlOptimus_Result__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Result__Sequence__destroy(optimus_interfaces__action__ControlOptimus_Result__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Result__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_Result__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_Result__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_Result__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_Result__Sequence * input,
  optimus_interfaces__action__ControlOptimus_Result__Sequence * output);

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_Feedback
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Feedback__init(optimus_interfaces__action__ControlOptimus_Feedback * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Feedback__fini(optimus_interfaces__action__ControlOptimus_Feedback * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_Feedback *
optimus_interfaces__action__ControlOptimus_Feedback__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Feedback__destroy(optimus_interfaces__action__ControlOptimus_Feedback * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Feedback__are_equal(const optimus_interfaces__action__ControlOptimus_Feedback * lhs, const optimus_interfaces__action__ControlOptimus_Feedback * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_Feedback__copy(
  const optimus_interfaces__action__ControlOptimus_Feedback * input,
  optimus_interfaces__action__ControlOptimus_Feedback * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__init(optimus_interfaces__action__ControlOptimus_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__fini(optimus_interfaces__action__ControlOptimus_Feedback__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_Feedback__Sequence *
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__destroy(optimus_interfaces__action__ControlOptimus_Feedback__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_Feedback__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_Feedback__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_Feedback__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_Feedback__Sequence * input,
  optimus_interfaces__action__ControlOptimus_Feedback__Sequence * output);

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__init(optimus_interfaces__action__ControlOptimus_SendGoal_Request * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Request * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_SendGoal_Request *
optimus_interfaces__action__ControlOptimus_SendGoal_Request__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Request * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Request * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Request * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_SendGoal_Request__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Request * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Request * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__init(optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence *
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Request__Sequence * output);

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__init(optimus_interfaces__action__ControlOptimus_SendGoal_Response * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Response * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_SendGoal_Response *
optimus_interfaces__action__ControlOptimus_SendGoal_Response__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Response * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Response * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Response * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_SendGoal_Response__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Response * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Response * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__init(optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__fini(optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence *
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__destroy(optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * input,
  optimus_interfaces__action__ControlOptimus_SendGoal_Response__Sequence * output);

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_GetResult_Request
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__init(optimus_interfaces__action__ControlOptimus_GetResult_Request * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Request__fini(optimus_interfaces__action__ControlOptimus_GetResult_Request * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_GetResult_Request *
optimus_interfaces__action__ControlOptimus_GetResult_Request__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Request__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Request * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Request * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Request * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_GetResult_Request__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Request * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Request * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__init(optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__fini(optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence *
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Request__Sequence * output);

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_GetResult_Response
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__init(optimus_interfaces__action__ControlOptimus_GetResult_Response * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Response__fini(optimus_interfaces__action__ControlOptimus_GetResult_Response * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_GetResult_Response *
optimus_interfaces__action__ControlOptimus_GetResult_Response__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Response__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Response * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Response * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Response * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_GetResult_Response__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Response * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Response * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__init(optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__fini(optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence *
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__destroy(optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * input,
  optimus_interfaces__action__ControlOptimus_GetResult_Response__Sequence * output);

/// Initialize action/ControlOptimus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage
 * )) before or use
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__init(optimus_interfaces__action__ControlOptimus_FeedbackMessage * msg);

/// Finalize action/ControlOptimus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini(optimus_interfaces__action__ControlOptimus_FeedbackMessage * msg);

/// Create action/ControlOptimus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_FeedbackMessage *
optimus_interfaces__action__ControlOptimus_FeedbackMessage__create();

/// Destroy action/ControlOptimus message.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__destroy(optimus_interfaces__action__ControlOptimus_FeedbackMessage * msg);

/// Check for action/ControlOptimus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__are_equal(const optimus_interfaces__action__ControlOptimus_FeedbackMessage * lhs, const optimus_interfaces__action__ControlOptimus_FeedbackMessage * rhs);

/// Copy a action/ControlOptimus message.
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
optimus_interfaces__action__ControlOptimus_FeedbackMessage__copy(
  const optimus_interfaces__action__ControlOptimus_FeedbackMessage * input,
  optimus_interfaces__action__ControlOptimus_FeedbackMessage * output);

/// Initialize array of action/ControlOptimus messages.
/**
 * It allocates the memory for the number of elements and calls
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__init(optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__fini(optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * array);

/// Create array of action/ControlOptimus messages.
/**
 * It allocates the memory for the array and calls
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence *
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ControlOptimus messages.
/**
 * It calls
 * optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
void
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__destroy(optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * array);

/// Check for action/ControlOptimus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
bool
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__are_equal(const optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * lhs, const optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ControlOptimus messages.
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
optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence__copy(
  const optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * input,
  optimus_interfaces__action__ControlOptimus_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__ACTION__DETAIL__CONTROL_OPTIMUS__FUNCTIONS_H_
