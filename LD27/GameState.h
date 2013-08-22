#ifndef GAMESTATE_H
#define GAMESTATE_H

class Game;

// analog to game state
class GameState{
public:
	virtual void enter(Game* g)=0;
	virtual void update(Game* g, float dt)=0;
	virtual void exit(Game* g)=0;

	virtual void draw(Game* g)=0;
	virtual void handle_input(Game*g, float dt)=0;
};

#endif