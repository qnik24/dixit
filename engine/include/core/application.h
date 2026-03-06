#if !defined(APPLICATON_H)
#define APPLICATON_H

#include <eden_api.h>

namespace eden::core {
	class EDEN_API Application {
	public:
		Application();
		virtual ~Application();

		virtual void run();
		virtual void terminate();
	};
}

#endif
