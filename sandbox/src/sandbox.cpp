#include <core/application.h>

#include <iostream>

class Sandbox : public eden::core::Application {
public:
	Sandbox() = default;
	~Sandbox() = default;

	void run() {
		while(m_running){
			if(std::getchar() == '1')
				terminate();
		}
	}

	void terminate() {
		m_running = false;
	}
private:
	bool m_running = true;
};

int main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->run();
	delete sandbox;

	return 0;
}
