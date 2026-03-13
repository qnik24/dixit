add_library(launcher STATIC launcher.cpp)

target_link_libraries(launcher
	PRIVATE eden
	PRIVATE SDL3::SDL3
)
