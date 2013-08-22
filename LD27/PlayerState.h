#ifndef PLAYERSTATE_H
#define PLAYERSTATE_H

class Player;

class PlayerState{
public:
	virtual void enter(Player*p)=0; //when entering state
	virtual void update(Player* p, float)=0; // update player, delta time
	virtual void exit(Player*p)=0; //when exiting state

	virtual void draw(Player* p, float)=0; // need player box, delta time 
	virtual void handle_input(Player* p, float)=0;
};

#endif