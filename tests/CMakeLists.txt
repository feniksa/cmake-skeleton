include_directories(${CMAKE_SOURCE_DIR}/src)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

set (TESTS
	Dummy
)

foreach(test ${TESTS})
	add_test(
			NAME ${test}
			COMMAND ${PROJECT_NAME}_tests --gtest_filter=Test${test}.*
			WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
		)
		set (TEST_SOURCES ${TEST_SOURCES} Test${test}.cpp)
endforeach()

file (GLOB HEADERS *.h)
#file (GLOB VERTEX_SHADERS *.vertexshader *.vert)
#file (GLOB FRAGMENT_SHADERS *.fragmentshader *.frag)

source_group("Header Files" FILES ${TEST_HEADERS})
#source_group("Shaders" FILES ${VERTEX_SHADERS} ${FRAGMENT_SHADERS})

add_executable(${PROJECT_NAME}_tests ${TEST_SOURCES} ${TEST_HEADERS} ${VERTEX_SHADERS} ${FRAGMENT_SHADERS})
target_link_libraries(${PROJECT_NAME}_tests
	#	${PROJECT_NAME}lib
	#	${OPENGL_LIBRARY}
	#	${GLEW_LIBRARY}
	#	${SDL2_image_LIBRARY}
	${GTEST_LIBRARIES}
	${GTEST_MAIN_LIBRARY}

	#${SDL2_LIBRARIES} <- see next line
)
# bug in sdl cmake
set_target_properties(${PROJECT_NAME}_tests PROPERTIES LINK_FLAGS "${SDL2_LIBRARIES}")

#set (RESOURCES
#	awesomeface.png 
	# SimpleBox.frag
	# SimpleBox.vert
#)

#foreach(resource ${RESOURCES})
#        configure_file(${resource} ${resource} COPYONLY)
#endforeach()

