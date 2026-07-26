#include <dixit/core/application.h>

#include <memory>

// no custom application for now
std::unique_ptr<dxt::Application>
dxt::createApplication() {
	return std::make_unique<dxt::Application>();
}
