#ifndef GLOBALS_H
#define GLOBALS_H

#include "SDL.h"

class Globals{
public:
	static SDL_Renderer* renderer;
	static SDL_Window* main_window;
	static SDL_Texture* player_sprite;
	static int TILE_SIZE;
	static float delta_time; //to store delta time, update in Main
	static bool game_running;
};

#endif