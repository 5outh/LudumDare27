#ifndef GAME_H
#define GAME_H

#include "Scene.h"
#include "SDL.h"

class Game;
class GameState;

class Game{
public:
	Game();
	GameState* current_state; //current running mode
	Scene* current_scene; //stuff to render etc
	float last_update; // time since last update

	void change_state(GameState* state);
	void change_scene(Scene* scene);
	void update();
	void draw();
};

#endif