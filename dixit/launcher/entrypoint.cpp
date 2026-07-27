/* Make this a proper launcher when the time comes */

#include <dixit/setup.h>

#include <iostream>

int main(int argc, char **argv) {
	if(!dxt::init()) return 1;

	std::printf("Testing from the launcher.\n");

	dxt::terminate();

	return 0;
}
