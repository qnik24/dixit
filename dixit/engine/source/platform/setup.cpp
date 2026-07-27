#include <platform/setup.h>

#include <GLFW/glfw3.h>

bool Platform::init() {
	// add quill later here
	if(!glfwInit()) {
		// log here?
		return false;	
	}

	return true;
}

void Platform::terminate() {
	glfwTerminate();	
}
