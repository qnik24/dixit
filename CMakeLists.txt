cmake_minimum_required(VERSION 4.1)
project(EDEN
	VERSION 0.0.1
	DESCRIPTION "A custom 3D game engine"
	LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17) # use C++17 for now
set(BIN_DIR "${CMAKE_SOURCE_DIR}/bin")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${BIN_DIR}") # shared lib output dir
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${BIN_DIR}/lib") # static lib output dir

foreach(cfg Debug Release RelWithDebInfo MinSizeRel)
    string(TOUPPER ${cfg} CFG)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${CFG} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${cfg})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_${CFG} ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/${cfg})
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${CFG} ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/${cfg})
endforeach()

add_subdirectory(engine)
add_subdirectory(sandbox)
