#ifndef APPLICATION_H
#define APPLICATION_H

#include <memory>

#include <eden/core/api.h>

namespace eden::core {
	class EDEN_API Application {
	public:
		Application() = default;
		virtual ~Application() = default;
		
		Application(const Application&) = delete;
		Application& operator=(const Application&) = delete;
		Application(Application&&) = delete;
		Application& operator=(const Application&&) = delete;
		
		virtual void Run() = 0;
		virtual void Terminate() = 0;
	};
	
	/*
	 * This is to be implemented client side.
	 */
	std::unique_ptr<Application> CreateApplication();
}

#endif
