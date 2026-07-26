#include <platform/platformevents.h>

#include <GLFW/glfw3.h>

void Platform::pollEvents() {
	glfwPollEvents();
}
