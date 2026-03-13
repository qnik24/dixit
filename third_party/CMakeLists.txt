include(FetchContent)

macro(find_or_fetch NAME VERSION TAG REPO)
	find_package(${NAME} ${VERSION} QUIET)
	if(NOT ${NAME}_FOUND)
		if(EXISTS ${THIRD_PARTY_LIB_DIR}/${NAME}/.git)
			message(STATUS "${NAME} already present in the third party directory, using that!")
			FetchContent_Declare(
				${NAME}
				SOURCE_DIR ${THIRD_PARTY_LIB_DIR}/${NAME}
			)
		else()
			message(STATUS "${NAME} not found on system, fetching!")
			FetchContent_Declare(
				${NAME}
				GIT_REPOSITORY ${REPO}
				GIT_TAG ${TAG}
				GIT_SHALLOW TRUE
				SOURCE_DIR ${THIRD_PARTY_LIB_DIR}/${NAME}
			)
		endif()
		FetchContent_MakeAvailable(${NAME})
	else()
		message(STATUS "${NAME} found on system, skipping the fetching process!")
	endif()
endmacro()

find_or_fetch(SDL 
	3.4.2 # current version
	release-3.4.2
	https://github.com/libsdl-org/SDL.git
)
