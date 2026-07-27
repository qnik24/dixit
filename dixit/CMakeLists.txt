project(dixit
	VERSION 0.0.0.1
	LANGUAGES CXX
	DESCRIPTION "Dixit 3D Game Engine"
)

add_subdirectory(engine)
add_subdirectory(launcher)

target_link_libraries(launcher PUBLIC engine)
add_library(dixit::dixit ALIAS launcher)
