#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <eden/core/application.h>

/*
 * NOTE: 'extern' keyword means the following if I ever forget the explanation:
 * Header files are directly inserted to the .cpp files, aka translation units.
 *
 * So CreateApplication() function is "declared" here technically after the insertion.
 * But no definiton will be provided in this file, thus we need to say; 
 * "Hey Linked, look elsewhere other than this translation unit, it will be provided"
 *
 * But future me, if you are saying, "Well, I never had to specify extern for function before."
 * "So what is different?" Literally nothing, this extern is redundant. Linker already checks for
 * linkage for functions if not found in the translation unit. It checks in other translation units
 * that will be linked to this one, so it is redundant techically. I just wanted to put it here
 * so that I remember it.
 */

extern std::unique_ptr<eden::core::Application> eden::core::CreateApplication();

int main(int argc, char **argv) {
	if(!SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_EVENTS)) {
		// change with your own logger here later: MICE
		return -1; // first error code, document these somewhere
	}

	auto app = eden::core::CreateApplication();
	app->Run();

	SDL_Quit();

	return 0;
}
