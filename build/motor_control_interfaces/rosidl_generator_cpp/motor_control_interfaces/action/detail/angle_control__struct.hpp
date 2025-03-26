// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_control_interfaces:action/AngleControl.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__STRUCT_HPP_
#define MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_Goal __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_Goal __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_Goal_
{
  using Type = AngleControl_Goal_<ContainerAllocator>;

  explicit AngleControl_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->speed_dps = 0;
      this->angle_deg = 0.0f;
    }
  }

  explicit AngleControl_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->speed_dps = 0;
      this->angle_deg = 0.0f;
    }
  }

  // field types and members
  using _motor_id_type =
    uint8_t;
  _motor_id_type motor_id;
  using _speed_dps_type =
    uint16_t;
  _speed_dps_type speed_dps;
  using _angle_deg_type =
    float;
  _angle_deg_type angle_deg;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint8_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__speed_dps(
    const uint16_t & _arg)
  {
    this->speed_dps = _arg;
    return *this;
  }
  Type & set__angle_deg(
    const float & _arg)
  {
    this->angle_deg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_Goal
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_Goal
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_Goal_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->speed_dps != other.speed_dps) {
      return false;
    }
    if (this->angle_deg != other.angle_deg) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_Goal_

// alias to use template instance with default allocator
using AngleControl_Goal =
  motor_control_interfaces::action::AngleControl_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces


#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_Result __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_Result __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_Result_
{
  using Type = AngleControl_Result_<ContainerAllocator>;

  explicit AngleControl_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->current_angle = 0.0f;
    }
  }

  explicit AngleControl_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->current_angle = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _current_angle_type =
    float;
  _current_angle_type current_angle;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__current_angle(
    const float & _arg)
  {
    this->current_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_Result
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_Result
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->current_angle != other.current_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_Result_

// alias to use template instance with default allocator
using AngleControl_Result =
  motor_control_interfaces::action::AngleControl_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces


#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_Feedback __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_Feedback_
{
  using Type = AngleControl_Feedback_<ContainerAllocator>;

  explicit AngleControl_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining = 0.0f;
    }
  }

  explicit AngleControl_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining = 0.0f;
    }
  }

  // field types and members
  using _remaining_type =
    float;
  _remaining_type remaining;

  // setters for named parameter idiom
  Type & set__remaining(
    const float & _arg)
  {
    this->remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_Feedback
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_Feedback
    std::shared_ptr<motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_Feedback_ & other) const
  {
    if (this->remaining != other.remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_Feedback_

// alias to use template instance with default allocator
using AngleControl_Feedback =
  motor_control_interfaces::action::AngleControl_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "motor_control_interfaces/action/detail/angle_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Request __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_SendGoal_Request_
{
  using Type = AngleControl_SendGoal_Request_<ContainerAllocator>;

  explicit AngleControl_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit AngleControl_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const motor_control_interfaces::action::AngleControl_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Request
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Request
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_SendGoal_Request_

// alias to use template instance with default allocator
using AngleControl_SendGoal_Request =
  motor_control_interfaces::action::AngleControl_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Response __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_SendGoal_Response_
{
  using Type = AngleControl_SendGoal_Response_<ContainerAllocator>;

  explicit AngleControl_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit AngleControl_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Response
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_SendGoal_Response
    std::shared_ptr<motor_control_interfaces::action::AngleControl_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_SendGoal_Response_

// alias to use template instance with default allocator
using AngleControl_SendGoal_Response =
  motor_control_interfaces::action::AngleControl_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces

namespace motor_control_interfaces
{

namespace action
{

struct AngleControl_SendGoal
{
  using Request = motor_control_interfaces::action::AngleControl_SendGoal_Request;
  using Response = motor_control_interfaces::action::AngleControl_SendGoal_Response;
};

}  // namespace action

}  // namespace motor_control_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Request __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_GetResult_Request_
{
  using Type = AngleControl_GetResult_Request_<ContainerAllocator>;

  explicit AngleControl_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit AngleControl_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Request
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Request
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_GetResult_Request_

// alias to use template instance with default allocator
using AngleControl_GetResult_Request =
  motor_control_interfaces::action::AngleControl_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Response __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_GetResult_Response_
{
  using Type = AngleControl_GetResult_Response_<ContainerAllocator>;

  explicit AngleControl_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit AngleControl_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const motor_control_interfaces::action::AngleControl_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Response
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_GetResult_Response
    std::shared_ptr<motor_control_interfaces::action::AngleControl_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_GetResult_Response_

// alias to use template instance with default allocator
using AngleControl_GetResult_Response =
  motor_control_interfaces::action::AngleControl_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces

namespace motor_control_interfaces
{

namespace action
{

struct AngleControl_GetResult
{
  using Request = motor_control_interfaces::action::AngleControl_GetResult_Request;
  using Response = motor_control_interfaces::action::AngleControl_GetResult_Response;
};

}  // namespace action

}  // namespace motor_control_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "motor_control_interfaces/action/detail/angle_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_control_interfaces__action__AngleControl_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__motor_control_interfaces__action__AngleControl_FeedbackMessage __declspec(deprecated)
#endif

namespace motor_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleControl_FeedbackMessage_
{
  using Type = AngleControl_FeedbackMessage_<ContainerAllocator>;

  explicit AngleControl_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit AngleControl_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const motor_control_interfaces::action::AngleControl_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_FeedbackMessage
    std::shared_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_control_interfaces__action__AngleControl_FeedbackMessage
    std::shared_ptr<motor_control_interfaces::action::AngleControl_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleControl_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleControl_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleControl_FeedbackMessage_

// alias to use template instance with default allocator
using AngleControl_FeedbackMessage =
  motor_control_interfaces::action::AngleControl_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace motor_control_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace motor_control_interfaces
{

namespace action
{

struct AngleControl
{
  /// The goal message defined in the action definition.
  using Goal = motor_control_interfaces::action::AngleControl_Goal;
  /// The result message defined in the action definition.
  using Result = motor_control_interfaces::action::AngleControl_Result;
  /// The feedback message defined in the action definition.
  using Feedback = motor_control_interfaces::action::AngleControl_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = motor_control_interfaces::action::AngleControl_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = motor_control_interfaces::action::AngleControl_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = motor_control_interfaces::action::AngleControl_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct AngleControl AngleControl;

}  // namespace action

}  // namespace motor_control_interfaces

#endif  // MOTOR_CONTROL_INTERFACES__ACTION__DETAIL__ANGLE_CONTROL__STRUCT_HPP_
