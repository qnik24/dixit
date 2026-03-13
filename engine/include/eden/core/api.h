#ifndef API_H
#define API_H

/*
 * This is for building a shared lib and exporting its symbols
 * It kind of only exists because of Windows
 * If need may be, add more platform specific code here
 */
// --------------------- MACRO -------------------------

#ifdef _WIN32
	#ifdef ENGINE_BUILD_DLL
		#define EDEN_API __declspec(dllexport)
	#else
		#define EDEN_API __declspec(dllimport)
	#endif
#else
	#define EDEN_API __declspec(dllimport)
#endif

// -----------------------------------------------------

#endif
