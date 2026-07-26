#include <dixit/dixit_setup.h>
#include <dixit/core/application.h>

#include <cstdlib>

#ifdef WIN32
// add the no console pragma here later
#endif

void scopeApp() {
	auto app = dxt::createApplication();

	/* init app */
	if(!app->init()) {
		// log here
		return;
	}
	else app->run();
}

int main(){
	/* init engine */
	if(!dxt::init()) {
		// log an error message here
		return EXIT_FAILURE;
	}

	scopeApp();
	
	/* terminate engine */
	dxt::terminate();

	return EXIT_SUCCESS;
}
