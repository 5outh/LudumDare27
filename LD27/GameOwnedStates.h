#ifndef GAMEOWNEDSTATES_H
#define GAMEOWNEDSTATES_H

#include "GameState.h"
#include "Player.h"
class Game;

class GameInStartScreen : public GameState{
public:
	virtual void enter(Game* g);
	virtual void update(Game* g, float dt);
	virtual void exit(Game* g);

	virtual void draw(Game* g);
	virtual void handle_input(Game*g, float dt);
	static GameInStartScreen* instance();
};

class GameMainGame : public GameState{
public:
	Player* plr;
	virtual void enter(Game* g);
	virtual void update(Game* g, float dt);
	virtual void exit(Game* g);

	virtual void draw(Game* g);
	virtual void handle_input(Game*g, float dt);
	static GameMainGame* instance();
};

class GamePlayerDead : public GameState{
public:
	virtual void enter(Game* g);
	virtual void update(Game* g, float dt);
	virtual void exit(Game* g);

	virtual void draw(Game* g);
	virtual void handle_input(Game*g, float dt);
	static GamePlayerDead* instance();
};

#endif