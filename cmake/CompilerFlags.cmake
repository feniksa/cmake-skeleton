if (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
add_definitions("-std=c++14"
                "-fno-elide-constructors"
                "-pedantic-errors"
                "-Wextra"
                "-Wall"
                "-Winit-self"
                "-Wold-style-cast"
                "-Woverloaded-virtual"
                "-Wuninitialized"
                "-Wmissing-declarations"
                "-Winit-self")
elseif(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	add_definitions("/std=c++14")
endif()
