#ifndef TILE_H
#define TILE_H

#include "Game.h"

class Tile{
public:
	static const int TILE_SIZE = 32; //const, static size 32x32
	void draw();
	void update_player(Game*);
};

#endif