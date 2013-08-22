#include "PlayerOwnedStates.h"
#include "SDL.h"
#include "Globals.h"
#include "Player.h"
#include "Windows.h"

PlayerNormal* PlayerNormal::instance(){
	static PlayerNormal p;
	return &p;
}

void PlayerNormal::enter(Player*p){
	// enter state
}


void PlayerNormal::exit(Player* p){
	//exit state
}

void PlayerNormal::update(Player* p, float dt){
	// update game based on state
	handle_input(p, dt);
}

void PlayerNormal::draw(Player* p, float dt){
	SDL_RenderCopy(Globals::renderer, Globals::player_sprite, NULL, p->box);
}

void PlayerNormal::handle_input(Player* p, float dt){
	const Uint8* key_state = SDL_GetKeyboardState(NULL);
	if(key_state[SDL_SCANCODE_UP]){
		p->yVelocity -= dt / 100;
		//move player up
	}else if(key_state[SDL_SCANCODE_DOWN]){
		p->yVelocity += dt / 100;
		// move player down
	}else{
		p->yVelocity = 0;
	}
	if(key_state[SDL_SCANCODE_LEFT]){
		p->xVelocity -= dt / 100;
		// move player left
	}else if(key_state[SDL_SCANCODE_RIGHT]){
		p->xVelocity += dt / 100;
		// move player right
	}else{
		p->xVelocity = 0;
	}
	// and so on
}