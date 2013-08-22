#include "Game.h"
#include "Globals.h"
#include "GameOwnedStates.h"

Game::Game(){
	last_update = 0;
	current_state = NULL;
	change_state(GameMainGame::instance());
	current_scene = NULL; // I don't know if this will even be a part of the final thing, we'll see
}

void Game::draw(){
	//werkin'!
	SDL_RenderClear(Globals::renderer);
	current_state->draw(this);
	SDL_RenderPresent(Globals::renderer);
}

void Game::update(){
	float dt = SDL_GetTicks() - last_update; //time since last update
	current_state->update(this, dt); // update game based on current state
	current_state->handle_input(this, dt); // update game based on user input
	last_update = SDL_GetTicks(); //update last update time
}

void Game::change_state(GameState* state){
	if(current_state != NULL){
		current_state->exit(this); //exit last state
	}
	current_state = state; //change state
	current_state->enter(this); //enter new state
}