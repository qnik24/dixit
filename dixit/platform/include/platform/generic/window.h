#ifndef PF_WINDOW
#define PF_WINDOW

#include <memory> 
#include <string>

namespace Platform {
	class Window {
	public:
		struct WindowSpec {
			int width = 800;
			int height = 600;
			std::string title = "Default Window Configuration";

			// use the callback here
		};

		virtual ~Window() = default;

		virtual void resize(int, int) = 0;
		virtual void applyWindowSpec(WindowSpec) = 0;

		virtual int width() const = 0;
		virtual int height() const = 0;
		virtual void* nativeHandle() const = 0;

		static std::unique_ptr<Window> create(WindowSpec);
	};
}

#endif
