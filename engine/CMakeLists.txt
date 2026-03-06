# define the shared lib
add_library(engine SHARED src/eden.cpp)

# to be used by submodules
set(ENGINE_VENDOR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor)
set(ENGINE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

# give the compile command here for the vendor libs
# link them in their appropriate submodules
add_subdirectory(vendor/SDL)

# this may look ugly and dangerous but it is easy?
# CMake has 2 systems I guess, one is directories and the other targets
# if I used target definitions, it does not go down, if I use this, it does
# and it is NOT seen in sandbox, because sandbox is NOT a subdirectory
add_compile_definitions(ENGINE_BUILD_DLL)

# submodules
add_subdirectory(src/core)

# we need this definition otherwise linker strips everything that is not in the dll entry point
# aka nearly everything because why would I put every feature there?
target_link_libraries(engine 
	PRIVATE "$<LINK_LIBRARY:WHOLE_ARCHIVE,core>"
)

target_include_directories(engine 
	PUBLIC "${ENGINE_INCLUDE_DIR}"
)
