#include "GameOwnedStates.h"
#include "SDL.h"
#include "Globals.h"
#include "Windows.h"
#include "Game.h"

/*-------------------*/
/*Start screen logic */
/*-------------------*/

void GameInStartScreen::enter(Game* g){

}

void GameInStartScreen::update(Game* g, float dt){

}

void GameInStartScreen::exit(Game* g){

}

void GameInStartScreen::draw(Game* g){

}

void GameInStartScreen::handle_input(Game*g, float dt){

}

GameInStartScreen* GameInStartScreen::instance(){
	static GameInStartScreen g;
	return &g;
}

/*----------------*/
/*Main game logic */
/*----------------*/
void GameMainGame::enter(Game* g){
	Player* p = new Player();
	plr = p;
}

void GameMainGame::update(Game* g, float dt){
	plr->update(dt);
}

void GameMainGame::exit(Game* g){
	plr = NULL;
}

void GameMainGame::draw(Game* g){
	plr->draw(); //that's all for now
}

void GameMainGame::handle_input(Game* g, float dt){
	const Uint8 *keystate = SDL_GetKeyboardState(NULL);
	if(keystate[SDL_SCANCODE_ESCAPE]){
		Globals::game_running = false;
	}
	plr->handle_input(dt);
}

GameMainGame* GameMainGame::instance(){
	static GameMainGame g;
	return &g;
}

/*------------*/
/*Player dead */
/*------------*/

void GamePlayerDead::enter(Game* g){

}

void GamePlayerDead::update(Game* g, float dt){

}

void GamePlayerDead::exit(Game* g){

}

void GamePlayerDead::draw(Game* g){

}

void GamePlayerDead::handle_input(Game* g, float dt){

}

GamePlayerDead* GamePlayerDead::instance(){
	static GamePlayerDead g;
	return &g;
}