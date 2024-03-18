// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
#define ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Float64MultiArray in the package aruco_interfaces.
typedef struct aruco_interfaces__msg__Float64MultiArray
{
  rosidl_runtime_c__double__Sequence data;
} aruco_interfaces__msg__Float64MultiArray;

// Struct for a sequence of aruco_interfaces__msg__Float64MultiArray.
typedef struct aruco_interfaces__msg__Float64MultiArray__Sequence
{
  aruco_interfaces__msg__Float64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__msg__Float64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__STRUCT_H_
