// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from motor_control_interfaces:action/AngleControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_Goal_type_support_ids_t;

static const _AngleControl_Goal_type_support_ids_t _AngleControl_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_Goal>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_Goal)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_Result_type_support_ids_t;

static const _AngleControl_Result_type_support_ids_t _AngleControl_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_Result>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_Result)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_Feedback_type_support_ids_t;

static const _AngleControl_Feedback_type_support_ids_t _AngleControl_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_Feedback>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_Feedback)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_SendGoal_Request_type_support_ids_t;

static const _AngleControl_SendGoal_Request_type_support_ids_t _AngleControl_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_SendGoal_Request>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_SendGoal_Request)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_SendGoal_Response_type_support_ids_t;

static const _AngleControl_SendGoal_Response_type_support_ids_t _AngleControl_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_SendGoal_Response>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_SendGoal_Response)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_SendGoal_type_support_ids_t;

static const _AngleControl_SendGoal_type_support_ids_t _AngleControl_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motor_control_interfaces::action::AngleControl_SendGoal>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motor_control_interfaces::action::AngleControl_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_GetResult_Request_type_support_ids_t;

static const _AngleControl_GetResult_Request_type_support_ids_t _AngleControl_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_GetResult_Request>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_GetResult_Request)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_GetResult_Response_type_support_ids_t;

static const _AngleControl_GetResult_Response_type_support_ids_t _AngleControl_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_GetResult_Response>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_GetResult_Response)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_GetResult_type_support_ids_t;

static const _AngleControl_GetResult_type_support_ids_t _AngleControl_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motor_control_interfaces::action::AngleControl_GetResult>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motor_control_interfaces::action::AngleControl_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AngleControl_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AngleControl_FeedbackMessage_type_support_ids_t;

static const _AngleControl_FeedbackMessage_type_support_ids_t _AngleControl_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_control_interfaces, action, AngleControl_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_control_interfaces, action, AngleControl_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AngleControl_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_control_interfaces::action::AngleControl_FeedbackMessage>()
{
  return &::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl_FeedbackMessage)() {
  return get_message_type_support_handle<motor_control_interfaces::action::AngleControl_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace motor_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t AngleControl_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<motor_control_interfaces::action::AngleControl>()
{
  using ::motor_control_interfaces::action::rosidl_typesupport_cpp::AngleControl_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  AngleControl_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::motor_control_interfaces::action::AngleControl::Impl::SendGoalService>();
  AngleControl_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::motor_control_interfaces::action::AngleControl::Impl::GetResultService>();
  AngleControl_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::motor_control_interfaces::action::AngleControl::Impl::CancelGoalService>();
  AngleControl_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::motor_control_interfaces::action::AngleControl::Impl::FeedbackMessage>();
  AngleControl_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::motor_control_interfaces::action::AngleControl::Impl::GoalStatusMessage>();
  return &AngleControl_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, motor_control_interfaces, action, AngleControl)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<motor_control_interfaces::action::AngleControl>();
}

#ifdef __cplusplus
}
#endif
