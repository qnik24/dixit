file(GLOB_RECURSE DIXIT_SOURCES CONFIGURE_DEPENDS 
	"src/*.cpp"
)

add_library(engine SHARED ${DIXIT_SOURCES})
set_target_properties(engine PROPERTIES 
	OUTPUT_NAME ${PROJECT_NAME}
)

target_compile_definitions(engine 
	PRIVATE DXTENGINE
)

target_include_directories(engine
	PUBLIC "include"
	PRIVATE "src"
)
