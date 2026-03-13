add_library(core OBJECT 
	application.cpp
)

# link platform lib here as well when the time comes
target_link_libraries(core
	PRIVATE engine_configuration
)
