cmake_minimum_required (VERSION 3.16)
project (cmake_skeleton CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

option(FORCE_COLORED_OUTPUT "Always produce ANSI-colored output (GNU/Clang only)." FALSE)
option(ENABLE_TESTING "Enable testing" TRUE)

include("${CMAKE_SOURCE_DIR}/cmake/CompileOptions.cmake")

find_package(Boost 1.79 REQUIRED COMPONENTS thread system filesystem program_options log)

add_subdirectory(src)

if(ENABLE_TESTING)
	enable_testing()
	add_subdirectory(tests)
endif()
