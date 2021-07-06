cmake_minimum_required (VERSION 3.16)
project (cmake_skeleton CXX)

#option(DEBUG_OPENGL "Enable additional checks of OpenGL calls" ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

add_definitions("-fno-elide-constructors"
                "-pedantic-errors"
                "-Wextra"
                "-Wall"
                "-Winit-self"
                "-Wold-style-cast"
                "-Woverloaded-virtual"
                "-Wuninitialized"
                "-Wmissing-declarations"
                "-Winit-self")

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
