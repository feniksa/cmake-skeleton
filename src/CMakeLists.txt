set(HEADERS
	test.h
)

set(SOURCES
	main.cpp
	test.cpp
)

#file (GLOB HEADERS *.h)
#source_group("Header Files" FILES ${HEADERS})

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS}) 
