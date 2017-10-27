cmake_minimum_required(VERSION 2.8)
project(avatar)
#manual if auto is fail
add_definitions(-DOpenCV_DIR="/home/logistic/opencv-3.1.0/build")
set(CMAKE_MACOSX_RPATH 1)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(client)
add_subdirectory(libs/GFrame)
add_subdirectory(server)
#add_subdirectory(apps/facial_motion_capture)
add_subdirectory(apps/head_pose_estimation)

