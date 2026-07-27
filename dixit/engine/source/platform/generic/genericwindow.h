#ifndef PF_GENERICWINDOW
#define PF_GENERICWINDOW

#include <memory>

namespace Platform {
	class GenericWindow {
	public:
		std::unique_ptr<GenericWindow> create();
		virtual ~GenericWindow();
	};
}

#endif
