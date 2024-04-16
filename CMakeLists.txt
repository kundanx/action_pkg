cmake_minimum_required(VERSION 3.8)
project(action_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(action_pkg REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

find_package(rosidl_default_generators REQUIRED)

add_library(action_client_ SHARED
  src/action_client.cpp)

add_library(action_server_ SHARED
  src/action_server.cpp)

target_include_directories(action_server_ PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_definitions(action_server_
  PRIVATE "ACTION_PKG_BUILDING_DLL")
target_compile_definitions(action_client_
 PRIVATE "ACTION_PKG_BUILDING_DLL")

ament_target_dependencies(action_client_
  "action_pkg"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")
ament_target_dependencies(action_server_
  "action_pkg"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")

rclcpp_components_register_node(action_client_ PLUGIN "fibonacci_action::FibActionClient" EXECUTABLE action_client)
rclcpp_components_register_node(action_server_ PLUGIN "fibonacci_action::FibActionServer" EXECUTABLE action_server)
install(TARGETS
  action_server_
  action_client_
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Action.action"
  "action/MotorControl.action"
)

ament_package()
