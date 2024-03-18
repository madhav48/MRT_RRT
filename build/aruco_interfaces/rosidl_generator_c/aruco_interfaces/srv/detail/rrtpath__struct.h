// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:srv/Rrtpath.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__STRUCT_H_
#define ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'coordinates'
// Member 'info'
#include "std_msgs/msg/detail/int64_multi_array__struct.h"

/// Struct defined in srv/Rrtpath in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__Rrtpath_Request
{
  sensor_msgs__msg__Image image;
  std_msgs__msg__Int64MultiArray coordinates;
  std_msgs__msg__Int64MultiArray info;
} aruco_interfaces__srv__Rrtpath_Request;

// Struct for a sequence of aruco_interfaces__srv__Rrtpath_Request.
typedef struct aruco_interfaces__srv__Rrtpath_Request__Sequence
{
  aruco_interfaces__srv__Rrtpath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__Rrtpath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'coordinates'
// already included above
// #include "std_msgs/msg/detail/int64_multi_array__struct.h"

/// Struct defined in srv/Rrtpath in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__Rrtpath_Response
{
  std_msgs__msg__Int64MultiArray coordinates;
} aruco_interfaces__srv__Rrtpath_Response;

// Struct for a sequence of aruco_interfaces__srv__Rrtpath_Response.
typedef struct aruco_interfaces__srv__Rrtpath_Response__Sequence
{
  aruco_interfaces__srv__Rrtpath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__Rrtpath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__SRV__DETAIL__RRTPATH__STRUCT_H_
