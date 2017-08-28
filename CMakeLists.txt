cmake_minimum_required (VERSION 2.8)
project (cmake_skeleton CXX)

#option(DEBUG_OPENGL "Enable additional checks of OpenGL calls" ON)

include ("${CMAKE_SOURCE_DIR}/cmake/Application.cmake")

#find_package(OpenGL REQUIRED)
#include_directories(${OpenGL_INCLUDE_DIR})

#find_package(GLEW REQUIRED)
#include_directories(${GLEW_INCLUDE_DIR})

#find_package(GLM REQUIRED)
#include_directories(${GLM_INCLUDE_DIR})

#find_package(SDL2 REQUIRED)
#include_directories(${SDL2_INCLUDE_DIRS})

#find_package(SDL2_image REQUIRED SDL2_image >= 2.0.0)
#include_directories(${SDL2_image_INCLUDE_DIR})

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
