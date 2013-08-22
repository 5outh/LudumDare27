#include "SDL.h"
#include "SDL_image.h"
#include <string>

class ImageLoader{
public:
	static SDL_Texture* load_image(SDL_Renderer*, std::string filename);
};