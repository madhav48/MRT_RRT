// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:msg/Float64.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__FLOAT64__STRUCT_H_
#define ARUCO_INTERFACES__MSG__DETAIL__FLOAT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Float64 in the package aruco_interfaces.
typedef struct aruco_interfaces__msg__Float64
{
  double data;
} aruco_interfaces__msg__Float64;

// Struct for a sequence of aruco_interfaces__msg__Float64.
typedef struct aruco_interfaces__msg__Float64__Sequence
{
  aruco_interfaces__msg__Float64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__msg__Float64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__MSG__DETAIL__FLOAT64__STRUCT_H_
