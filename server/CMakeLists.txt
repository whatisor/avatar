cmake_minimum_required(VERSION 2.8)

project(FaceViewer)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
SET(GFRAME_SRC_DIR ../libs/GFrame)
SET(CMAKE_CXX_FLAGS "-std=c++11 -pthread")

include_directories(../client/include)
include_directories(../libs/GFrame)
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} ${GFRAME_SRC_DIR})
link_directories(../libs/GFrame)

FILE(GLOB SERVER_SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(FaceViewer ${SERVER_SRC} ../client/src/Socket.cpp)

target_link_libraries(FaceViewer ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} GFrame GLEW GLU)

INSTALL(FILES ${CMAKE_SOURCE_DIR}/libs/GFrame/assets/models/face/face.obj DESTINATION ${CMAKE_BINARY_DIR}/bin)
INSTALL(DIRECTORY ${CMAKE_SOURCE_DIR}/libs/GFrame/shaders DESTINATION ${CMAKE_BINARY_DIR}/bin)

