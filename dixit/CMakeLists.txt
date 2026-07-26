project(dixit VERSION 0.0.1
	DESCRIPTION "A homebrewed 3D Game Engine"
	LANGUAGES C CXX)

# fetch dependencies into the build
include (cmake/Dependencies.cmake)

add_subdirectory(platform)
add_subdirectory(engine)
add_subdirectory(launcher)

# link architecture
target_link_libraries(engine PRIVATE platform)
target_link_libraries(launcher PUBLIC engine)
#alias everything in once, so we can just link to that
add_library(dixit::dixit ALIAS launcher)
