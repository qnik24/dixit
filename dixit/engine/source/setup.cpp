#include <dixit/setup.h>

#include <platform/setup.h>

bool dxt::init() {
	// init logger here?
	if(!Platform::init()) {
		// log here?
		return false;
	}

	return true;
}

void dxt::terminate() {
	Platform::terminate();
}
