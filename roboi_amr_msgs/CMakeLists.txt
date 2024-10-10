cmake_minimum_required(VERSION 3.8)
project(roboi_amr_msgs)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

set(msg_files
        "msg/AngleStatus.msg"         
        "msg/Ledcommand.msg"
        "msg/Udpmsg.msg"              
)

#set(srv_files
#        "srv/LedCommand.srv"
#)

#set(action_files
#        "action/LedCommand.action"
#        )

include_directories(
  include
  ${CMAKE_CURRENT_BINARY_DIR}/rclcpp/rclcpp
)

rosidl_generate_interfaces(${PROJECT_NAME}
        ${msg_files}
#        ${srv_files}
#        ${action_files}
        DEPENDENCIES builtin_interfaces std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
