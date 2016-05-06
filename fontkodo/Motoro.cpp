#include <mojosero/Motoro.h>
#include <mojosero/Helpaj/Eraro.h>
#include <SDL2/SDL.h>

using namespace Mojosero;
struct window_data
{
	SDL_Rect bounds;
	SDL_Window *window;
};

Motoro::Motoro(GParametro parametro){
	if(SDL_Init(SDL_INIT_VIDEO) != 0)
		throw Eraro(SDL_GetError());

	int numdisplays = SDL_GetNumVideoDisplays();
	std::vector< window_data > screens( numdisplays );
	for( int i = 0 ; i < numdisplays ; ++i )
	{
		SDL_GetDisplayBounds( i, &( screens[ i ].bounds ) );
		screens[ i ].window
				= SDL_CreateWindow( "Display", screens[ i ].bounds.x,
									screens[ i ].bounds.y, screens[ i ].bounds.w,
									screens[ i ].bounds.h, SDL_WINDOW_FULLSCREEN );
	}
}

Motoro::~Motoro(){
}

bool Motoro::faru(){
	while(!a_finata){
		//
	}
}
