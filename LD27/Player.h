#ifndef PLAYER_H
#define PLAYER_H

#include "SDL.h"
#include "PlayerState.h"

class PlayerState;
class Player;

class Player{
public:
	Player();

	float xVelocity;
	float yVelocity;
	int MAX_VELOCITY;

	SDL_Rect* box;
	PlayerState* current_state;

	void changeState(PlayerState*);

	void handle_input(float dt);
	void update(float dt);
	void move();
	void draw();
};
#endif