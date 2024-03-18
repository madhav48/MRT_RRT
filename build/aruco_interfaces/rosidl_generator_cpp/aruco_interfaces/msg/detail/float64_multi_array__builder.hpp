// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__BUILDER_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_interfaces/msg/detail/float64_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_interfaces
{

namespace msg
{

namespace builder
{

class Init_Float64MultiArray_data
{
public:
  Init_Float64MultiArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_interfaces::msg::Float64MultiArray data(::aruco_interfaces::msg::Float64MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::msg::Float64MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::msg::Float64MultiArray>()
{
  return aruco_interfaces::msg::builder::Init_Float64MultiArray_data();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__BUILDER_HPP_
