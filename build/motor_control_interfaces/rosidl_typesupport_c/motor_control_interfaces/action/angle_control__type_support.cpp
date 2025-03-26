// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from motor_control_interfaces:action/AngleControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motor_control_interfaces/action/detail/angle_control__struct.h"
#include "motor_control_interfaces/action/detail/angle_control__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_Goal_type_support_ids_t;

static const _AngleControl_Goal_type_support_ids_t _AngleControl_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_Goal_type_support_symbol_names_t _AngleControl_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_Goal)),
  }
};

typedef struct _AngleControl_Goal_type_support_data_t
{
  void * data[2];
} _AngleControl_Goal_type_support_data_t;

static _AngleControl_Goal_type_support_data_t _AngleControl_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_Goal_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_Goal)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_Result_type_support_ids_t;

static const _AngleControl_Result_type_support_ids_t _AngleControl_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_Result_type_support_symbol_names_t _AngleControl_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_Result)),
  }
};

typedef struct _AngleControl_Result_type_support_data_t
{
  void * data[2];
} _AngleControl_Result_type_support_data_t;

static _AngleControl_Result_type_support_data_t _AngleControl_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_Result_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_Result_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_Result_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_Result)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_Feedback_type_support_ids_t;

static const _AngleControl_Feedback_type_support_ids_t _AngleControl_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_Feedback_type_support_symbol_names_t _AngleControl_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_Feedback)),
  }
};

typedef struct _AngleControl_Feedback_type_support_data_t
{
  void * data[2];
} _AngleControl_Feedback_type_support_data_t;

static _AngleControl_Feedback_type_support_data_t _AngleControl_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_Feedback_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_Feedback)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_SendGoal_Request_type_support_ids_t;

static const _AngleControl_SendGoal_Request_type_support_ids_t _AngleControl_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_SendGoal_Request_type_support_symbol_names_t _AngleControl_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_SendGoal_Request)),
  }
};

typedef struct _AngleControl_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _AngleControl_SendGoal_Request_type_support_data_t;

static _AngleControl_SendGoal_Request_type_support_data_t _AngleControl_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_SendGoal_Request_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_SendGoal_Request)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_SendGoal_Response_type_support_ids_t;

static const _AngleControl_SendGoal_Response_type_support_ids_t _AngleControl_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_SendGoal_Response_type_support_symbol_names_t _AngleControl_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_SendGoal_Response)),
  }
};

typedef struct _AngleControl_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _AngleControl_SendGoal_Response_type_support_data_t;

static _AngleControl_SendGoal_Response_type_support_data_t _AngleControl_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_SendGoal_Response_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_SendGoal_Response)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_SendGoal_type_support_ids_t;

static const _AngleControl_SendGoal_type_support_ids_t _AngleControl_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_SendGoal_type_support_symbol_names_t _AngleControl_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_SendGoal)),
  }
};

typedef struct _AngleControl_SendGoal_type_support_data_t
{
  void * data[2];
} _AngleControl_SendGoal_type_support_data_t;

static _AngleControl_SendGoal_type_support_data_t _AngleControl_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_SendGoal_service_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AngleControl_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_SendGoal)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_GetResult_Request_type_support_ids_t;

static const _AngleControl_GetResult_Request_type_support_ids_t _AngleControl_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_GetResult_Request_type_support_symbol_names_t _AngleControl_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_GetResult_Request)),
  }
};

typedef struct _AngleControl_GetResult_Request_type_support_data_t
{
  void * data[2];
} _AngleControl_GetResult_Request_type_support_data_t;

static _AngleControl_GetResult_Request_type_support_data_t _AngleControl_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_GetResult_Request_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_GetResult_Request)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_GetResult_Response_type_support_ids_t;

static const _AngleControl_GetResult_Response_type_support_ids_t _AngleControl_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_GetResult_Response_type_support_symbol_names_t _AngleControl_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_GetResult_Response)),
  }
};

typedef struct _AngleControl_GetResult_Response_type_support_data_t
{
  void * data[2];
} _AngleControl_GetResult_Response_type_support_data_t;

static _AngleControl_GetResult_Response_type_support_data_t _AngleControl_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_GetResult_Response_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_GetResult_Response)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_GetResult_type_support_ids_t;

static const _AngleControl_GetResult_type_support_ids_t _AngleControl_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_GetResult_type_support_symbol_names_t _AngleControl_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_GetResult)),
  }
};

typedef struct _AngleControl_GetResult_type_support_data_t
{
  void * data[2];
} _AngleControl_GetResult_type_support_data_t;

static _AngleControl_GetResult_type_support_data_t _AngleControl_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_GetResult_service_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AngleControl_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_GetResult)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AngleControl_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_FeedbackMessage_type_support_ids_t;

static const _AngleControl_FeedbackMessage_type_support_ids_t _AngleControl_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AngleControl_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AngleControl_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AngleControl_FeedbackMessage_type_support_symbol_names_t _AngleControl_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_control_interfaces, action, AngleControl_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_control_interfaces, action, AngleControl_FeedbackMessage)),
  }
};

typedef struct _AngleControl_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _AngleControl_FeedbackMessage_type_support_data_t;

static _AngleControl_FeedbackMessage_type_support_data_t _AngleControl_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AngleControl_FeedbackMessage_message_typesupport_map = {
  2,
  "motor_control_interfaces",
  &_AngleControl_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_AngleControl_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_AngleControl_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AngleControl_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace motor_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_FeedbackMessage)() {
  return &::motor_control_interfaces::action::rosidl_typesupport_c::AngleControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "motor_control_interfaces/action/angle_control.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__type_support.h"

static rosidl_action_type_support_t _motor_control_interfaces__action__AngleControl__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, motor_control_interfaces, action, AngleControl)()
{
  // Thread-safe by always writing the same values to the static struct
  _motor_control_interfaces__action__AngleControl__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_SendGoal)();
  _motor_control_interfaces__action__AngleControl__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_GetResult)();
  _motor_control_interfaces__action__AngleControl__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _motor_control_interfaces__action__AngleControl__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, motor_control_interfaces, action, AngleControl_FeedbackMessage)();
  _motor_control_interfaces__action__AngleControl__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_motor_control_interfaces__action__AngleControl__typesupport_c;
}

#ifdef __cplusplus
}
#endif
