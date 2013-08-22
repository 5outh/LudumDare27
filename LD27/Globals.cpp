#include "ImageLoader.h"
#include "Globals.h"

SDL_Window* Globals::main_window = SDL_CreateWindow("Ludum Dare 27",
									      SDL_WINDOWPOS_UNDEFINED,
										  SDL_WINDOWPOS_UNDEFINED,
										  640, 480,
										  SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
SDL_Renderer* Globals::renderer = SDL_CreateRenderer(main_window, -1, 0);
SDL_Texture* Globals::player_sprite = ImageLoader::load_image(renderer, "player.png");
int Globals::TILE_SIZE = 32;
bool Globals::game_running = true;