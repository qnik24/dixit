# setup a interface lib to carry over setup details to submodules
add_library(engine_configuration INTERFACE)
target_include_directories(engine_configuration
	INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

target_compile_definitions(engine_configuration
	INTERFACE ENGINE_BUILD_DLL
)

# define the actual shared lib
add_library(eden SHARED eden.cpp)

target_link_libraries(eden
	PRIVATE engine_configuration
	PRIVATE core
)

target_include_directories(eden
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

add_subdirectory(core)
