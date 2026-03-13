#include <eden/core/application.h>

// DEBUG
#include <string>
#include <iostream>

class Sandbox : public eden::core::Application {
public:
	Sandbox() = default;
	~Sandbox() = default;

	void Run() override {
		std::cout << "Hello from eden Engine!" << std::endl;
		while(m_running) {
			std::getline(std::cin, test);
			std::cout << test << std::endl;
			if(test=="done") Terminate();
		}
	}

	void Terminate() override {
		m_running = false;
	}

private:
	bool m_running = true;
	std::string test;
};

std::unique_ptr<eden::core::Application> eden::core::CreateApplication() {
	return std::make_unique<Sandbox>();
}
