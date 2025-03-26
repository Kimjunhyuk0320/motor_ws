// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_control_interfaces:action/AngleControl.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__STRUCT_H_
#define MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_Goal
{
  /// 모터 CAN ID (1~32)
  uint8_t motor_id;
  /// 회전 속도 (단위: dps, 1LSB = 1dps)
  uint16_t speed_dps;
  /// 이동할 각도 (degree)
  float angle_deg;
} motor_control_interfaces__action__AngleControl_Goal;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_Goal.
typedef struct motor_control_interfaces__action__AngleControl_Goal__Sequence
{
  motor_control_interfaces__action__AngleControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_Result
{
  /// 성공 여부
  bool success;
  /// 모터가 멈췄을 때의 실제 현재 각도 (degree)
  float current_angle;
} motor_control_interfaces__action__AngleControl_Result;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_Result.
typedef struct motor_control_interfaces__action__AngleControl_Result__Sequence
{
  motor_control_interfaces__action__AngleControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_Feedback
{
  /// 남은 회전 각도 (degree)
  float remaining;
} motor_control_interfaces__action__AngleControl_Feedback;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_Feedback.
typedef struct motor_control_interfaces__action__AngleControl_Feedback__Sequence
{
  motor_control_interfaces__action__AngleControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "motor_control_interfaces/action/detail/angle_control__struct.h"

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  motor_control_interfaces__action__AngleControl_Goal goal;
} motor_control_interfaces__action__AngleControl_SendGoal_Request;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_SendGoal_Request.
typedef struct motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence
{
  motor_control_interfaces__action__AngleControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} motor_control_interfaces__action__AngleControl_SendGoal_Response;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_SendGoal_Response.
typedef struct motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence
{
  motor_control_interfaces__action__AngleControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} motor_control_interfaces__action__AngleControl_GetResult_Request;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_GetResult_Request.
typedef struct motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence
{
  motor_control_interfaces__action__AngleControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_GetResult_Response
{
  int8_t status;
  motor_control_interfaces__action__AngleControl_Result result;
} motor_control_interfaces__action__AngleControl_GetResult_Response;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_GetResult_Response.
typedef struct motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence
{
  motor_control_interfaces__action__AngleControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"

/// Struct defined in action/AngleControl in the package motor_control_interfaces.
typedef struct motor_control_interfaces__action__AngleControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  motor_control_interfaces__action__AngleControl_Feedback feedback;
} motor_control_interfaces__action__AngleControl_FeedbackMessage;

// Struct for a sequence of motor_control_interfaces__action__AngleControl_FeedbackMessage.
typedef struct motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence
{
  motor_control_interfaces__action__AngleControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_control_interfaces__action__AngleControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__STRUCT_H_
