#ifndef DXT_APPLICATION
#define DXT_APPLICATION

#include <dixit/dixitAPI.h>

#include <memory>

namespace Platform { class Window; }

namespace dxt {
	class DXTAPI Application {
	public:
		// add application spec here later
		Application();
		virtual ~Application();
		
		bool init();
		void run();

	private:
		void terminate();

		bool m_Running;
		std::unique_ptr<Platform::Window> m_mainWindow;
		
		// subsystems
	};
	
	// to be defined user side
	// so no API needed?
	std::unique_ptr<Application> createApplication();
}

#endif
