#include <mojosero/Motoro.hpp>
#include <SDL2/SDL.h>
#include <iostream>

using namespace Mojosero;

Motoro::Motoro() {
	SDL_Init(SDL_INIT_EVERYTHING);
}

Motoro::~Motoro() {
}

bool Motoro::initigxu(Motoro::REGXIMO regximo) {
//	if (flag(regximo, Motoro::REGXIMO::TUTEKRANA)) {
		//SDL_CreateWindow("Display", 0, 0, 100, 100, SDL_WINDOW_BORDERLESS);
/*
		std::vector< window_data > screens( SDL_GetNumVideoDisplays() );
				for( size_t i = 0; i < screens.size(); ++i )
				{
						window_data& screen = screens[ i ];
						SDL_GetDisplayBounds( i, &screen.bounds );
						screen.window = SDL_CreateWindow
								(
								"Display",
								screen.bounds.x, screen.bounds.y,
								screen.bounds.w, screen.bounds.h,
								SDL_WINDOW_BORDERLESS
								);

						SDL_ShowWindow( screen.window );
				}*/
//	}
	return true;
}

bool Motoro::faru() {
	while (!a_finata) {
		//
	}
}
