cmake_minimum_required(VERSION 3.8)
project(roboi_amr_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(roboi_amr_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

#Build
include_directories(include)

add_executable(roboi_amr_control
  src/roboi_amr.cpp
  src/roboi_udp.cpp
  src/roboi_indicator.cpp
  src/roboi_motor.cpp
  src/roboi_driver.cpp
)
ament_target_dependencies(roboi_amr_control
  rclcpp
  roboi_amr_msgs
  std_msgs
  sensor_msgs
)

# Install
install(TARGETS
   roboi_amr_control
  DESTINATION lib/${PROJECT_NAME}mc
)

target_link_libraries(roboi_amr_control EziMOTIONPlusE)
target_link_libraries(roboi_amr_control rclcpp::rclcpp)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

# source install/local_setup.bash
# source /opt/ros/humble/setup.bash
# . install/setup.bash
# ros2 pkg executables <패키지명>
# ros2 node list
# ros2 param list
# find . -type f | xargs -n 5 touch
# colcon build --packages-select
# colcon build --symlink-install
# sudo ip link set up can0 type can bitrate 1000000
# sudo ip link set can0 up
