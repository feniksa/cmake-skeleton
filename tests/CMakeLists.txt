find_package(GTest REQUIRED)

set(HEADERS
	utils.h
)
set(SOURCES
	utils.cpp
)

set (TESTS
	Math
)

foreach(test ${TESTS})
	add_test(
			NAME ${test}
			COMMAND tests_main --gtest_filter=Test${test}.*
			WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
		)
		set (TEST_SOURCES ${TEST_SOURCES} Test${test}.cpp)
endforeach()

add_executable(tests_main ${TEST_SOURCES} ${TEST_HEADERS})
target_link_libraries(tests_main
	GTest::gtest
	GTest::gtest_main
	math
)

target_include_directories(tests_main
	PRIVATE
	"${CMAKE_SOURCE_DIR}"
	"${CMAKE_CURRENT_BINARY_DIR}"
)

configure_file(Environment.h.in ${CMAKE_CURRENT_BINARY_DIR}/Environment.h @ONLY)
