cmake_minimum_required(VERSION 4.0.0) # totally random for now

project(dixitWorkshop VERSION 0.0.1
	DESCRIPTION "axiom Engine Orchestrator"
	LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# I am not using modules for now
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/lib")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(dixit)
add_subdirectory(sandbox)
