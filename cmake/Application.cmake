set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

# include only win32 specific stuff on win32 platfrom
if (WIN32)
	set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Win32_64_Specific/")
endif()

include("${CMAKE_SOURCE_DIR}/cmake/CompilerFlags.cmake")
