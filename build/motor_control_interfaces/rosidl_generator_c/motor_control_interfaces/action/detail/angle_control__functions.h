// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motor_control_interfaces:action/AngleControl.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__FUNCTIONS_H_
#define MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "motor_control_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "motor_control_interfaces/action/detail/angle_control__struct.h"

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_Goal
 * )) before or use
 * motor_control_interfaces__action__AngleControl_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Goal__init(motor_control_interfaces__action__AngleControl_Goal * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Goal__fini(motor_control_interfaces__action__AngleControl_Goal * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_Goal *
motor_control_interfaces__action__AngleControl_Goal__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Goal__destroy(motor_control_interfaces__action__AngleControl_Goal * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Goal__are_equal(const motor_control_interfaces__action__AngleControl_Goal * lhs, const motor_control_interfaces__action__AngleControl_Goal * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Goal__copy(
  const motor_control_interfaces__action__AngleControl_Goal * input,
  motor_control_interfaces__action__AngleControl_Goal * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Goal__Sequence__init(motor_control_interfaces__action__AngleControl_Goal__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Goal__Sequence__fini(motor_control_interfaces__action__AngleControl_Goal__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_Goal__Sequence *
motor_control_interfaces__action__AngleControl_Goal__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Goal__Sequence__destroy(motor_control_interfaces__action__AngleControl_Goal__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Goal__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_Goal__Sequence * lhs, const motor_control_interfaces__action__AngleControl_Goal__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Goal__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_Goal__Sequence * input,
  motor_control_interfaces__action__AngleControl_Goal__Sequence * output);

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_Result
 * )) before or use
 * motor_control_interfaces__action__AngleControl_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Result__init(motor_control_interfaces__action__AngleControl_Result * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Result__fini(motor_control_interfaces__action__AngleControl_Result * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_Result *
motor_control_interfaces__action__AngleControl_Result__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Result__destroy(motor_control_interfaces__action__AngleControl_Result * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Result__are_equal(const motor_control_interfaces__action__AngleControl_Result * lhs, const motor_control_interfaces__action__AngleControl_Result * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Result__copy(
  const motor_control_interfaces__action__AngleControl_Result * input,
  motor_control_interfaces__action__AngleControl_Result * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Result__Sequence__init(motor_control_interfaces__action__AngleControl_Result__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Result__Sequence__fini(motor_control_interfaces__action__AngleControl_Result__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_Result__Sequence *
motor_control_interfaces__action__AngleControl_Result__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Result__Sequence__destroy(motor_control_interfaces__action__AngleControl_Result__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Result__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_Result__Sequence * lhs, const motor_control_interfaces__action__AngleControl_Result__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Result__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_Result__Sequence * input,
  motor_control_interfaces__action__AngleControl_Result__Sequence * output);

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_Feedback
 * )) before or use
 * motor_control_interfaces__action__AngleControl_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Feedback__init(motor_control_interfaces__action__AngleControl_Feedback * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Feedback__fini(motor_control_interfaces__action__AngleControl_Feedback * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_Feedback *
motor_control_interfaces__action__AngleControl_Feedback__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Feedback__destroy(motor_control_interfaces__action__AngleControl_Feedback * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Feedback__are_equal(const motor_control_interfaces__action__AngleControl_Feedback * lhs, const motor_control_interfaces__action__AngleControl_Feedback * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Feedback__copy(
  const motor_control_interfaces__action__AngleControl_Feedback * input,
  motor_control_interfaces__action__AngleControl_Feedback * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Feedback__Sequence__init(motor_control_interfaces__action__AngleControl_Feedback__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Feedback__Sequence__fini(motor_control_interfaces__action__AngleControl_Feedback__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_Feedback__Sequence *
motor_control_interfaces__action__AngleControl_Feedback__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_Feedback__Sequence__destroy(motor_control_interfaces__action__AngleControl_Feedback__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Feedback__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_Feedback__Sequence * lhs, const motor_control_interfaces__action__AngleControl_Feedback__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_Feedback__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_Feedback__Sequence * input,
  motor_control_interfaces__action__AngleControl_Feedback__Sequence * output);

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_SendGoal_Request
 * )) before or use
 * motor_control_interfaces__action__AngleControl_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Request__init(motor_control_interfaces__action__AngleControl_SendGoal_Request * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Request__fini(motor_control_interfaces__action__AngleControl_SendGoal_Request * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_SendGoal_Request *
motor_control_interfaces__action__AngleControl_SendGoal_Request__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Request__destroy(motor_control_interfaces__action__AngleControl_SendGoal_Request * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Request__are_equal(const motor_control_interfaces__action__AngleControl_SendGoal_Request * lhs, const motor_control_interfaces__action__AngleControl_SendGoal_Request * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Request__copy(
  const motor_control_interfaces__action__AngleControl_SendGoal_Request * input,
  motor_control_interfaces__action__AngleControl_SendGoal_Request * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__init(motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__fini(motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence *
motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__destroy(motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence * lhs, const motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence * input,
  motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence * output);

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_SendGoal_Response
 * )) before or use
 * motor_control_interfaces__action__AngleControl_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Response__init(motor_control_interfaces__action__AngleControl_SendGoal_Response * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Response__fini(motor_control_interfaces__action__AngleControl_SendGoal_Response * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_SendGoal_Response *
motor_control_interfaces__action__AngleControl_SendGoal_Response__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Response__destroy(motor_control_interfaces__action__AngleControl_SendGoal_Response * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Response__are_equal(const motor_control_interfaces__action__AngleControl_SendGoal_Response * lhs, const motor_control_interfaces__action__AngleControl_SendGoal_Response * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Response__copy(
  const motor_control_interfaces__action__AngleControl_SendGoal_Response * input,
  motor_control_interfaces__action__AngleControl_SendGoal_Response * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__init(motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__fini(motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence *
motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__destroy(motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence * lhs, const motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence * input,
  motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence * output);

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_GetResult_Request
 * )) before or use
 * motor_control_interfaces__action__AngleControl_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Request__init(motor_control_interfaces__action__AngleControl_GetResult_Request * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Request__fini(motor_control_interfaces__action__AngleControl_GetResult_Request * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_GetResult_Request *
motor_control_interfaces__action__AngleControl_GetResult_Request__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Request__destroy(motor_control_interfaces__action__AngleControl_GetResult_Request * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Request__are_equal(const motor_control_interfaces__action__AngleControl_GetResult_Request * lhs, const motor_control_interfaces__action__AngleControl_GetResult_Request * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Request__copy(
  const motor_control_interfaces__action__AngleControl_GetResult_Request * input,
  motor_control_interfaces__action__AngleControl_GetResult_Request * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__init(motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__fini(motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence *
motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__destroy(motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence * lhs, const motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence * input,
  motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence * output);

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_GetResult_Response
 * )) before or use
 * motor_control_interfaces__action__AngleControl_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Response__init(motor_control_interfaces__action__AngleControl_GetResult_Response * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Response__fini(motor_control_interfaces__action__AngleControl_GetResult_Response * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_GetResult_Response *
motor_control_interfaces__action__AngleControl_GetResult_Response__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Response__destroy(motor_control_interfaces__action__AngleControl_GetResult_Response * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Response__are_equal(const motor_control_interfaces__action__AngleControl_GetResult_Response * lhs, const motor_control_interfaces__action__AngleControl_GetResult_Response * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Response__copy(
  const motor_control_interfaces__action__AngleControl_GetResult_Response * input,
  motor_control_interfaces__action__AngleControl_GetResult_Response * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__init(motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__fini(motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence *
motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__destroy(motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence * lhs, const motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence * input,
  motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence * output);

/// Initialize action/AngleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_control_interfaces__action__AngleControl_FeedbackMessage
 * )) before or use
 * motor_control_interfaces__action__AngleControl_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_FeedbackMessage__init(motor_control_interfaces__action__AngleControl_FeedbackMessage * msg);

/// Finalize action/AngleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_FeedbackMessage__fini(motor_control_interfaces__action__AngleControl_FeedbackMessage * msg);

/// Create action/AngleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_control_interfaces__action__AngleControl_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_FeedbackMessage *
motor_control_interfaces__action__AngleControl_FeedbackMessage__create();

/// Destroy action/AngleControl message.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_FeedbackMessage__destroy(motor_control_interfaces__action__AngleControl_FeedbackMessage * msg);

/// Check for action/AngleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_FeedbackMessage__are_equal(const motor_control_interfaces__action__AngleControl_FeedbackMessage * lhs, const motor_control_interfaces__action__AngleControl_FeedbackMessage * rhs);

/// Copy a action/AngleControl message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_FeedbackMessage__copy(
  const motor_control_interfaces__action__AngleControl_FeedbackMessage * input,
  motor_control_interfaces__action__AngleControl_FeedbackMessage * output);

/// Initialize array of action/AngleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_control_interfaces__action__AngleControl_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__init(motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__fini(motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence * array);

/// Create array of action/AngleControl messages.
/**
 * It allocates the memory for the array and calls
 * motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence *
motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/AngleControl messages.
/**
 * It calls
 * motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
void
motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__destroy(motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence * array);

/// Check for action/AngleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__are_equal(const motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence * lhs, const motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/AngleControl messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_control_interfaces
bool
motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence__copy(
  const motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence * input,
  motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__FUNCTIONS_H_
