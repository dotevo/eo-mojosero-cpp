#pragma once

#include <memory>

#include <SDL2/SDL.h>
#include <mojosero/Objekto.hpp>
#include <mojosero/LKesto.tpp>

namespace Mojosero {
class Fenestro: public Objekto {
private:
	LKesto<int> a_limoj;
	SDL_Window *a_fenestro;
	SDL_Renderer* a_bildigilo;

public:
	Fenestro(std::string nomo, LKesto<int> lkesto, int ekrano);
};
}
