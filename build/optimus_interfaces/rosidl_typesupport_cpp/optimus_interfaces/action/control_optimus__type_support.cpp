// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from optimus_interfaces:action/ControlOptimus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_Goal_type_support_ids_t;

static const _ControlOptimus_Goal_type_support_ids_t _ControlOptimus_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_Goal_type_support_symbol_names_t _ControlOptimus_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_Goal)),
  }
};

typedef struct _ControlOptimus_Goal_type_support_data_t
{
  void * data[2];
} _ControlOptimus_Goal_type_support_data_t;

static _ControlOptimus_Goal_type_support_data_t _ControlOptimus_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_Goal_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_Goal>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_Goal)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_Goal>();
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
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_Result_type_support_ids_t;

static const _ControlOptimus_Result_type_support_ids_t _ControlOptimus_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_Result_type_support_symbol_names_t _ControlOptimus_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_Result)),
  }
};

typedef struct _ControlOptimus_Result_type_support_data_t
{
  void * data[2];
} _ControlOptimus_Result_type_support_data_t;

static _ControlOptimus_Result_type_support_data_t _ControlOptimus_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_Result_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_Result>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_Result)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_Result>();
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
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_Feedback_type_support_ids_t;

static const _ControlOptimus_Feedback_type_support_ids_t _ControlOptimus_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_Feedback_type_support_symbol_names_t _ControlOptimus_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_Feedback)),
  }
};

typedef struct _ControlOptimus_Feedback_type_support_data_t
{
  void * data[2];
} _ControlOptimus_Feedback_type_support_data_t;

static _ControlOptimus_Feedback_type_support_data_t _ControlOptimus_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_Feedback_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_Feedback>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_Feedback)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_Feedback>();
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
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_SendGoal_Request_type_support_ids_t;

static const _ControlOptimus_SendGoal_Request_type_support_ids_t _ControlOptimus_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_SendGoal_Request_type_support_symbol_names_t _ControlOptimus_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_SendGoal_Request)),
  }
};

typedef struct _ControlOptimus_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ControlOptimus_SendGoal_Request_type_support_data_t;

static _ControlOptimus_SendGoal_Request_type_support_data_t _ControlOptimus_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_SendGoal_Request_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_SendGoal_Request>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_SendGoal_Request)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_SendGoal_Request>();
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
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_SendGoal_Response_type_support_ids_t;

static const _ControlOptimus_SendGoal_Response_type_support_ids_t _ControlOptimus_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_SendGoal_Response_type_support_symbol_names_t _ControlOptimus_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_SendGoal_Response)),
  }
};

typedef struct _ControlOptimus_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ControlOptimus_SendGoal_Response_type_support_data_t;

static _ControlOptimus_SendGoal_Response_type_support_data_t _ControlOptimus_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_SendGoal_Response_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_SendGoal_Response>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_SendGoal_Response)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_SendGoal_type_support_ids_t;

static const _ControlOptimus_SendGoal_type_support_ids_t _ControlOptimus_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_SendGoal_type_support_symbol_names_t _ControlOptimus_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_SendGoal)),
  }
};

typedef struct _ControlOptimus_SendGoal_type_support_data_t
{
  void * data[2];
} _ControlOptimus_SendGoal_type_support_data_t;

static _ControlOptimus_SendGoal_type_support_data_t _ControlOptimus_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_SendGoal_service_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ControlOptimus_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<optimus_interfaces::action::ControlOptimus_SendGoal>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_GetResult_Request_type_support_ids_t;

static const _ControlOptimus_GetResult_Request_type_support_ids_t _ControlOptimus_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_GetResult_Request_type_support_symbol_names_t _ControlOptimus_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_GetResult_Request)),
  }
};

typedef struct _ControlOptimus_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ControlOptimus_GetResult_Request_type_support_data_t;

static _ControlOptimus_GetResult_Request_type_support_data_t _ControlOptimus_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_GetResult_Request_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_GetResult_Request>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_GetResult_Request)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_GetResult_Request>();
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
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_GetResult_Response_type_support_ids_t;

static const _ControlOptimus_GetResult_Response_type_support_ids_t _ControlOptimus_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_GetResult_Response_type_support_symbol_names_t _ControlOptimus_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_GetResult_Response)),
  }
};

typedef struct _ControlOptimus_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ControlOptimus_GetResult_Response_type_support_data_t;

static _ControlOptimus_GetResult_Response_type_support_data_t _ControlOptimus_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_GetResult_Response_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_GetResult_Response>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_GetResult_Response)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_GetResult_Response>();
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
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_GetResult_type_support_ids_t;

static const _ControlOptimus_GetResult_type_support_ids_t _ControlOptimus_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_GetResult_type_support_symbol_names_t _ControlOptimus_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_GetResult)),
  }
};

typedef struct _ControlOptimus_GetResult_type_support_data_t
{
  void * data[2];
} _ControlOptimus_GetResult_type_support_data_t;

static _ControlOptimus_GetResult_type_support_data_t _ControlOptimus_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_GetResult_service_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ControlOptimus_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<optimus_interfaces::action::ControlOptimus_GetResult>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
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

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ControlOptimus_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlOptimus_FeedbackMessage_type_support_ids_t;

static const _ControlOptimus_FeedbackMessage_type_support_ids_t _ControlOptimus_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ControlOptimus_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlOptimus_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlOptimus_FeedbackMessage_type_support_symbol_names_t _ControlOptimus_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, optimus_interfaces, action, ControlOptimus_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, optimus_interfaces, action, ControlOptimus_FeedbackMessage)),
  }
};

typedef struct _ControlOptimus_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ControlOptimus_FeedbackMessage_type_support_data_t;

static _ControlOptimus_FeedbackMessage_type_support_data_t _ControlOptimus_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlOptimus_FeedbackMessage_message_typesupport_map = {
  2,
  "optimus_interfaces",
  &_ControlOptimus_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ControlOptimus_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ControlOptimus_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlOptimus_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlOptimus_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_FeedbackMessage>()
{
  return &::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, optimus_interfaces, action, ControlOptimus_FeedbackMessage)() {
  return get_message_type_support_handle<optimus_interfaces::action::ControlOptimus_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "optimus_interfaces/action/detail/control_optimus__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace optimus_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ControlOptimus_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace optimus_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<optimus_interfaces::action::ControlOptimus>()
{
  using ::optimus_interfaces::action::rosidl_typesupport_cpp::ControlOptimus_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ControlOptimus_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::optimus_interfaces::action::ControlOptimus::Impl::SendGoalService>();
  ControlOptimus_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::optimus_interfaces::action::ControlOptimus::Impl::GetResultService>();
  ControlOptimus_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::optimus_interfaces::action::ControlOptimus::Impl::CancelGoalService>();
  ControlOptimus_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::optimus_interfaces::action::ControlOptimus::Impl::FeedbackMessage>();
  ControlOptimus_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::optimus_interfaces::action::ControlOptimus::Impl::GoalStatusMessage>();
  return &ControlOptimus_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
