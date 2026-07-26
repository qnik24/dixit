#ifndef DXT_SETUP
#define DXT_SETUP

#include <dixit/dixitAPI.h>

namespace dxt {
	// these are pretty much wrappers for platform for now
	DXTAPI bool init();
	DXTAPI void terminate();
}

#endif
