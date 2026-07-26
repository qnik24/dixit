include(FetchContent)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
	GLFW
	GIT_REPOSITORY "https://github.com/glfw/glfw.git"
	GIT_TAG "3.4"

	# options
	GIT_SHALLOW TRUE
	GIT_PROGRESS TRUE
	# FIND_PACKAGE_ARGS
)

FetchContent_MakeAvailable(GLFW)
