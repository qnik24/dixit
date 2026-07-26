file(GLOB_RECURSE PFSOURCES CONFIGURE_DEPENDS
	"libbed/*.cpp"
)

add_library(platform STATIC ${PFSOURCES})

target_link_libraries(platform 
	PRIVATE glfw
)

target_include_directories(platform
	PUBLIC "include"
)
