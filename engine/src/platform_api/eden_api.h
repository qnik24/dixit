/*
 * Add more platforms if needed
 * Although I think Windows is the only one doing this bs import stuff
 * Another Penguin W
 */

#if defined(_WIN32)
	#if defined (ENGINE_BUILD_DLL)
		#define EDEN_API __declspec(dllexport)
	#else
		#define EDEN_API __declspec(dllimport)
	#endif
#else
	#define EDEN_API
#endif
