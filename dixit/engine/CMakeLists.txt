# just glob for now
file(GLOB_RECURSE ENGINE_FILES CONFIGURE_DEPENDS
	"source/*.cpp"
)

add_library(engine SHARED ${ENGINE_FILES})
set_target_properties(engine PROPERTIES
	OUTPUT_NAME ${PROJECT_NAME}
)
target_compile_definitions(engine 
	PRIVATE DXTENGINE
)

include(cmake/dependencies.cmake)

target_include_directories(engine
	PUBLIC include
	PRIVATE source
)

target_link_libraries(engine
	PRIVATE glfw
	PUBLIC quill
)
