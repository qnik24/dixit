include(FetchContent)

# disable GLFW extras
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
	glfw
	GIT_REPOSITORY https://github.com/glfw/glfw.git
	GIT_TAG        3.4 # Stable GLFW 3.4 release
	GIT_SHALLOW    TRUE
)

# disable Quill tests and examples
set(QUILL_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(QUILL_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(QUILL_ENABLE_INSTALL OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
	quill
	GIT_REPOSITORY https://github.com/odygrd/quill.git
	GIT_TAG        v8.1.0 # Modern stable release tag
	GIT_SHALLOW    TRUE
)

message(STATUS "Fetching external dependencies.")
FetchContent_MakeAvailable(glfw quill)
message(STATUS "Dependencies fetched successfully.")
