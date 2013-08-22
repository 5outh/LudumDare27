#include "SDL.h"
#include "Globals.h"
#include "Windows.h"
#include "Game.h"
#include "Player.h"

int last_tick = 0;

void regulate_frame_rate(int fps){
	//SDL_GetTicks() //current ticks;
	//last_tick = last update time
	int elapsed_time = SDL_GetTicks() - last_tick; // time elapsed in ms since last update
	int tick_run_time = 1000 / fps;

	if(elapsed_time < tick_run_time){
		SDL_Delay(tick_run_time - elapsed_time);
	}
}

int main(int argc, char** argv){
	Game g;
	const Uint8 *keystate = SDL_GetKeyboardState(NULL);

	while(Globals::game_running){
		SDL_PumpEvents(); //populate event queue for processing
		g.update();
		g.draw();
		regulate_frame_rate(60);
		last_tick = SDL_GetTicks();
	}

	return 0;
};