#ifndef PLAYEROWNEDSTATES_H
#define PLAYEROWNEDSTATES_H

#include "PlayerState.h"

class Player;
class PlayerNormal;

class PlayerNormal : public PlayerState{
private:
  PlayerNormal(){}

  //copy ctor and assignment should be private
  PlayerNormal(const PlayerNormal&);
  PlayerNormal& operator=(const PlayerNormal&);
public:
	void enter(Player* p);
	void update(Player* p, float dt);
	void exit(Player* p);

	void draw(Player* p, float dt);
	void handle_input(Player* p, float dt);

	static PlayerNormal* instance();
};

// ... and the rest of the states...
#endif