#include "Player.h"
#include "PlayerOwnedStates.h"
#include "Globals.h"
#include <cmath>
#include "SDL.h"
#include <sstream>
#include "Windows.h"

class PlayerNormal;

Player::Player(){
	MAX_VELOCITY = 1;
	xVelocity = 0;
	yVelocity = 0;
	SDL_Rect* b = new SDL_Rect();
	b->x = 0;
	b->y = 0;
	b->h = Globals::TILE_SIZE;
	b->w = Globals::TILE_SIZE;
	box = b;
	current_state = PlayerNormal::instance();
};

void Player::draw(){
	SDL_RenderCopy(Globals::renderer, Globals::player_sprite, NULL, box);
}

void Player::update(float dt){
	current_state->update(this, dt);
	move();
	// update yo shiz
}

void Player::move(){
	std::stringstream ss;
	ss << xVelocity << " " << yVelocity << "\n";

	//buggy, fix this shit.
	OutputDebugString(ss.str().c_str());
	if(xVelocity < MAX_VELOCITY && xVelocity > -MAX_VELOCITY){
		if(xVelocity < 0){
			box->x += floor(xVelocity);
		}else{
			box->x += ceil(xVelocity);
		}
	}else if(xVelocity < -MAX_VELOCITY){
		xVelocity = -MAX_VELOCITY;
		box->x += xVelocity;
	}else{ //velocity is greater than max_velocity
		xVelocity = MAX_VELOCITY;
		box->x += xVelocity;
	}

	if(yVelocity > -MAX_VELOCITY && yVelocity < MAX_VELOCITY){
		if(yVelocity < 0){
			box->y += floor(yVelocity);
		}else{
			box->y += ceil(yVelocity);
		}
	}else if(yVelocity < -MAX_VELOCITY){
		yVelocity = -MAX_VELOCITY;
		box->y += yVelocity;
	}else{ //velocity greater than max_velocity
		yVelocity = MAX_VELOCITY;
		box->y += yVelocity;
	}
	// move yo self
}

void Player::handle_input(float dt){
	current_state->handle_input(this, dt); //handle yo input
}