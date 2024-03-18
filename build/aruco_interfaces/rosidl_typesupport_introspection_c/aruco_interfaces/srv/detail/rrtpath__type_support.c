// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_interfaces:srv/Rrtpath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_interfaces/srv/detail/rrtpath__rosidl_typesupport_introspection_c.h"
#include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_interfaces/srv/detail/rrtpath__functions.h"
#include "aruco_interfaces/srv/detail/rrtpath__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `coordinates`
// Member `info`
#include "std_msgs/msg/int64_multi_array.h"
// Member `coordinates`
// Member `info`
#include "std_msgs/msg/detail/int64_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_interfaces__srv__Rrtpath_Request__init(message_memory);
}

void aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_fini_function(void * message_memory)
{
  aruco_interfaces__srv__Rrtpath_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_member_array[3] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__srv__Rrtpath_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__srv__Rrtpath_Request, coordinates),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__srv__Rrtpath_Request, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_members = {
  "aruco_interfaces__srv",  // message namespace
  "Rrtpath_Request",  // message name
  3,  // number of fields
  sizeof(aruco_interfaces__srv__Rrtpath_Request),
  aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_member_array,  // message members
  aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_type_support_handle = {
  0,
  &aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, Rrtpath_Request)() {
  aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64MultiArray)();
  aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64MultiArray)();
  if (!aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_type_support_handle.typesupport_identifier) {
    aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_interfaces__srv__Rrtpath_Request__rosidl_typesupport_introspection_c__Rrtpath_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aruco_interfaces/srv/detail/rrtpath__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aruco_interfaces/srv/detail/rrtpath__functions.h"
// already included above
// #include "aruco_interfaces/srv/detail/rrtpath__struct.h"


// Include directives for member types
// Member `coordinates`
// already included above
// #include "std_msgs/msg/int64_multi_array.h"
// Member `coordinates`
// already included above
// #include "std_msgs/msg/detail/int64_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_interfaces__srv__Rrtpath_Response__init(message_memory);
}

void aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_fini_function(void * message_memory)
{
  aruco_interfaces__srv__Rrtpath_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_member_array[1] = {
  {
    "coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__srv__Rrtpath_Response, coordinates),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_members = {
  "aruco_interfaces__srv",  // message namespace
  "Rrtpath_Response",  // message name
  1,  // number of fields
  sizeof(aruco_interfaces__srv__Rrtpath_Response),
  aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_member_array,  // message members
  aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_type_support_handle = {
  0,
  &aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, Rrtpath_Response)() {
  aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64MultiArray)();
  if (!aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_type_support_handle.typesupport_identifier) {
    aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_interfaces__srv__Rrtpath_Response__rosidl_typesupport_introspection_c__Rrtpath_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aruco_interfaces/srv/detail/rrtpath__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_service_members = {
  "aruco_interfaces__srv",  // service namespace
  "Rrtpath",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_Request_message_type_support_handle,
  NULL  // response message
  // aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_Response_message_type_support_handle
};

static rosidl_service_type_support_t aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_service_type_support_handle = {
  0,
  &aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, Rrtpath_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, Rrtpath_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, Rrtpath)() {
  if (!aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_service_type_support_handle.typesupport_identifier) {
    aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, Rrtpath_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, srv, Rrtpath_Response)()->data;
  }

  return &aruco_interfaces__srv__detail__rrtpath__rosidl_typesupport_introspection_c__Rrtpath_service_type_support_handle;
}
