#include <platform/platform.h>

#include <GLFW/glfw3.h>

bool Platform::init() {
	/* init logger here */

	if(!glfwInit()) {
		// log an error message here
		return 0;
	}

	return 1;
}

void Platform::terminate() {
	glfwTerminate();
}
