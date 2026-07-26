#include <dixit/dixit_setup.h>

#include <platform/platform.h>

bool dxt::init() {
	/* init logger here or at the platform level 
	 * probably the platform layer,
	 * as errors there need to logged as well */
	if(!Platform::init()) {
		// log a message here
		return 0;
	}

	return 1;
}

void dxt::terminate() {
	Platform::terminate();
}
