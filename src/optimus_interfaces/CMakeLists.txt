cmake_minimum_required(VERSION 3.8)
project(optimus_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


# find dependencies
find_package(ament_cmake REQUIRED)
# find_package(<dependency> REQUIRED)
find_package(rosidl_default_generators REQUIRED) # <-- Added // Removed Test

rosidl_generate_interfaces(${PROJECT_NAME} # <-- added all this as well
  # Add Nodes Here No Commas
  "msg/MotorDriver.msg"
  "msg/UltraSonicRange.msg"
  "srv/AutonomousDriver.srv"
  "action/ControlOptimus.action"
)

ament_package()
