#include <dixit/core/application.h>

#include <platform/platformevents.h>
#include <platform/generic/window.h>

dxt::Application::Application() {
	m_Running = true;
}

// default for now
dxt::Application::~Application() = default;


bool dxt::Application::init() {
	m_mainWindow = Platform::Window::create(Platform::Window::WindowSpec());
	if(!m_mainWindow) {
		return false;
	}

	return true;
}

void dxt::Application::run() {
	while(m_Running) {
		Platform::pollEvents();	
	}
}

void dxt::Application::terminate() {
	m_Running = false;
}
