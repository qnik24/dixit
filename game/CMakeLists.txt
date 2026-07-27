project(sandbox
	VERSION 0.0.0.1
	LANGUAGES CXX
	DESCRIPTION "A game with dixit engine"
)

add_executable(sandbox main.cpp)

target_link_libraries(sandbox
	PRIVATE dixit::dixit
)
