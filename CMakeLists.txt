cmake_minimum_required(VERSION 4.0) # the version installed on my machine for now

project(eden
	VERSION 0.0.0.1
	DESCRIPTION "A 3D game engine"
	LANGUAGES CXX C
)

set(CMAKE_CXX_STANDARD 17)

# set a root bin directory for output
# note to self, learn about CMake generator expressions: 
# https://cmake.org/cmake/help/latest/manual/cmake-generator-expressions.7.html
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/$<CONFIG>)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/$<CONFIG>)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/lib/$<CONFIG>)

set(THIRD_PARTY_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party)

add_subdirectory(third_party)

add_subdirectory(engine)
add_subdirectory(launcher)
add_subdirectory(sandbox)
