#ifndef DXT_API
#define DXT_API

#ifdef _WIN32
#ifdef DXTENGINE
#define DXTAPI __declspec(dllexport)
#else
#define DXTAPI __declspec(dllimport)
#endif
#else
#define DXTAPI
#endif

#endif
