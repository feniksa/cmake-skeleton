set(HEADERS
	fibonachi.h
)

set(SOURCES
	fibonachi.cpp
)

add_library(math STATIC ${SOURCES} ${HEADERS})
target_include_directories(math PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" Boost::log)
target_link_libraries(math PUBLIC
    Boost::system
    Boost::filesystem
    Boost::thread
    Boost::program_options
    Boost::log
)


add_executable(main main.cpp) 
target_link_libraries(main PUBLIC
    math
)
