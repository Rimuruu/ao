#pragma once
#include "window.h"
#include "SDL.h"

namespace ao {
	class windowSDL : public window {
		SDL_Window* win;

	public:
		windowSDL();
		virtual int init();
		virtual int render();
		virtual int exit();


	};

}