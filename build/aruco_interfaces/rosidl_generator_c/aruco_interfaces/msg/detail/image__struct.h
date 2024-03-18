// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_
#define ARUCO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_

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

/// Struct defined in msg/Image in the package aruco_interfaces.
typedef struct aruco_interfaces__msg__Image
{
  sensor_msgs__msg__Image image;
} aruco_interfaces__msg__Image;

// Struct for a sequence of aruco_interfaces__msg__Image.
typedef struct aruco_interfaces__msg__Image__Sequence
{
  aruco_interfaces__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__msg__Image__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_
