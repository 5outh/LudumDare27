#include "ImageLoader.h"
#include "Windows.h"

SDL_Texture* ImageLoader::load_image(SDL_Renderer* r, std::string filename){
	SDL_Texture* tex = nullptr;
    tex = IMG_LoadTexture(r, filename.c_str());
    if (tex == nullptr)
        throw std::runtime_error("Failed to load image: " + filename + IMG_GetError());
    return tex;
};