// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_interfaces:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice
#include "aruco_interfaces/msg/detail/float64_multi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
aruco_interfaces__msg__Float64MultiArray__init(aruco_interfaces__msg__Float64MultiArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    aruco_interfaces__msg__Float64MultiArray__fini(msg);
    return false;
  }
  return true;
}

void
aruco_interfaces__msg__Float64MultiArray__fini(aruco_interfaces__msg__Float64MultiArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

bool
aruco_interfaces__msg__Float64MultiArray__are_equal(const aruco_interfaces__msg__Float64MultiArray * lhs, const aruco_interfaces__msg__Float64MultiArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
aruco_interfaces__msg__Float64MultiArray__copy(
  const aruco_interfaces__msg__Float64MultiArray * input,
  aruco_interfaces__msg__Float64MultiArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

aruco_interfaces__msg__Float64MultiArray *
aruco_interfaces__msg__Float64MultiArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__Float64MultiArray * msg = (aruco_interfaces__msg__Float64MultiArray *)allocator.allocate(sizeof(aruco_interfaces__msg__Float64MultiArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_interfaces__msg__Float64MultiArray));
  bool success = aruco_interfaces__msg__Float64MultiArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_interfaces__msg__Float64MultiArray__destroy(aruco_interfaces__msg__Float64MultiArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_interfaces__msg__Float64MultiArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_interfaces__msg__Float64MultiArray__Sequence__init(aruco_interfaces__msg__Float64MultiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__Float64MultiArray * data = NULL;

  if (size) {
    data = (aruco_interfaces__msg__Float64MultiArray *)allocator.zero_allocate(size, sizeof(aruco_interfaces__msg__Float64MultiArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_interfaces__msg__Float64MultiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_interfaces__msg__Float64MultiArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_interfaces__msg__Float64MultiArray__Sequence__fini(aruco_interfaces__msg__Float64MultiArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_interfaces__msg__Float64MultiArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_interfaces__msg__Float64MultiArray__Sequence *
aruco_interfaces__msg__Float64MultiArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__Float64MultiArray__Sequence * array = (aruco_interfaces__msg__Float64MultiArray__Sequence *)allocator.allocate(sizeof(aruco_interfaces__msg__Float64MultiArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_interfaces__msg__Float64MultiArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_interfaces__msg__Float64MultiArray__Sequence__destroy(aruco_interfaces__msg__Float64MultiArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_interfaces__msg__Float64MultiArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_interfaces__msg__Float64MultiArray__Sequence__are_equal(const aruco_interfaces__msg__Float64MultiArray__Sequence * lhs, const aruco_interfaces__msg__Float64MultiArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_interfaces__msg__Float64MultiArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_interfaces__msg__Float64MultiArray__Sequence__copy(
  const aruco_interfaces__msg__Float64MultiArray__Sequence * input,
  aruco_interfaces__msg__Float64MultiArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_interfaces__msg__Float64MultiArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_interfaces__msg__Float64MultiArray * data =
      (aruco_interfaces__msg__Float64MultiArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_interfaces__msg__Float64MultiArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_interfaces__msg__Float64MultiArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_interfaces__msg__Float64MultiArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}