set(SOURCES
	main.cpp
)

file (GLOB HEADERS *.h)
source_group("Header Files" FILES ${HEADERS})

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS}) 
