// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:srv/Tagid.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__TAGID__BUILDER_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__TAGID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_interfaces/srv/detail/tagid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_Tagid_Request_image
{
public:
  Init_Tagid_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_interfaces::srv::Tagid_Request image(::aruco_interfaces::srv::Tagid_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::Tagid_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::Tagid_Request>()
{
  return aruco_interfaces::srv::builder::Init_Tagid_Request_image();
}

}  // namespace aruco_interfaces


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_Tagid_Response_ids
{
public:
  explicit Init_Tagid_Response_ids(::aruco_interfaces::srv::Tagid_Response & msg)
  : msg_(msg)
  {}
  ::aruco_interfaces::srv::Tagid_Response ids(::aruco_interfaces::srv::Tagid_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::Tagid_Response msg_;
};

class Init_Tagid_Response_coordinates
{
public:
  Init_Tagid_Response_coordinates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tagid_Response_ids coordinates(::aruco_interfaces::srv::Tagid_Response::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_Tagid_Response_ids(msg_);
  }

private:
  ::aruco_interfaces::srv::Tagid_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::Tagid_Response>()
{
  return aruco_interfaces::srv::builder::Init_Tagid_Response_coordinates();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__TAGID__BUILDER_HPP_
