add_library(core STATIC
	application.cpp
)

target_link_libraries(core PRIVATE SDL3::SDL3)

target_include_directories(core PRIVATE "${ENGINE_INCLUDE_DIR}")
