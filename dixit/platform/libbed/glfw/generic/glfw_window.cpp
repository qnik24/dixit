#include <platform/generic/window.h>

#include <GLFW/glfw3.h>

#include <cstdlib>
#include <string>

namespace Platform {
	class GLFWWindow final : public Window {
	public:
		~GLFWWindow();

		void resize(int, int) override;
		void applyWindowSpec(WindowSpec) override;

		int width() const override;
		int height() const override;
		void* nativeHandle() const override;

		static std::unique_ptr<GLFWWindow> create(WindowSpec);

	private:
		GLFWWindow(WindowSpec, GLFWwindow*) noexcept;

		int m_width;
		int m_height;
		std::string m_title;

		GLFWwindow* m_glfwHandle;
	};
}

Platform::GLFWWindow::GLFWWindow(WindowSpec winSpec, GLFWwindow* glfwHandle) noexcept { 
	applyWindowSpec(winSpec);
	m_glfwHandle = glfwHandle;
	glfwSetWindowUserPointer(m_glfwHandle, this);
}

Platform::GLFWWindow::~GLFWWindow() { 
	glfwDestroyWindow(m_glfwHandle);
}

void Platform::GLFWWindow::resize(int width, int height) {
	m_width = width;
	m_height = height;
	
	glfwSetWindowSize(m_glfwHandle, m_width, m_height);
}

void Platform::GLFWWindow::applyWindowSpec(WindowSpec winSpec) {
	m_width = winSpec.width;
	m_height = winSpec.height;
	m_title = std::move(winSpec.title);
}

int Platform::GLFWWindow::width() const {
	return m_width;
}

int Platform::GLFWWindow::height() const {
	return m_height;
}

void* Platform::GLFWWindow::nativeHandle() const {
	return static_cast<void*>(m_glfwHandle);
}

std::unique_ptr<Platform::GLFWWindow> Platform::GLFWWindow::create(Platform::Window::WindowSpec winSpec) {
	GLFWwindow* glfwHandle;
	// reset the window creation hints
	glfwDefaultWindowHints();
	
	// we will be using vulkan, so no API
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	glfwHandle = glfwCreateWindow(winSpec.width, winSpec.height, winSpec.title.c_str(), NULL, NULL);
	if(!glfwHandle) {
		return nullptr;
	}

	// get the raw mouse input if supported
	if(glfwRawMouseMotionSupported()) {
		// hold off the raw input for now
		// glfwSetInputMode(glfwHandle, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
		// glfwSetInputMode(glfwHandle, GLFW_RAW_MOUSE_MOTION, GLFW_TRUE);
	}

	return std::unique_ptr<Platform::GLFWWindow>(new Platform::GLFWWindow(winSpec, glfwHandle));
}

// the factory function definition
std::unique_ptr<Platform::Window> Platform::Window::create(Platform::Window::WindowSpec winSpec) {
	return GLFWWindow::create(winSpec);
}

