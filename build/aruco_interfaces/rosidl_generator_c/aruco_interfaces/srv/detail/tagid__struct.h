// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:srv/Tagid.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__TAGID__STRUCT_H_
#define ARUCO_INTERFACES__SRV__DETAIL__TAGID__STRUCT_H_

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

/// Struct defined in srv/Tagid in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__Tagid_Request
{
  sensor_msgs__msg__Image image;
} aruco_interfaces__srv__Tagid_Request;

// Struct for a sequence of aruco_interfaces__srv__Tagid_Request.
typedef struct aruco_interfaces__srv__Tagid_Request__Sequence
{
  aruco_interfaces__srv__Tagid_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__Tagid_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'coordinates'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Tagid in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__Tagid_Response
{
  std_msgs__msg__Float64MultiArray coordinates;
  rosidl_runtime_c__int32__Sequence ids;
} aruco_interfaces__srv__Tagid_Response;

// Struct for a sequence of aruco_interfaces__srv__Tagid_Response.
typedef struct aruco_interfaces__srv__Tagid_Response__Sequence
{
  aruco_interfaces__srv__Tagid_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__Tagid_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__SRV__DETAIL__TAGID__STRUCT_H_
