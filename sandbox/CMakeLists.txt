project(dixitSandBox VERSION 0.0.1
	DESCRIPTION "Engine Testing Sandbox"
	LANGUAGES C CXX)

add_executable(sandbox main.cpp)

target_link_libraries(sandbox PRIVATE dixit::dixit)
