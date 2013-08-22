#ifndef SCENE_H
#define SCENE_H

#include "Player.h"

class Scene{
public:
	Player* p;
	bool scene_finished; //if scene is currently running
	void update(int); //dt
	void handle_input();
	void draw();
};

#endif