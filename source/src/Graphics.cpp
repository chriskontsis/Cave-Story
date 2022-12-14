#include "graphics.h"
#include <SDL2/SDL.h>


Graphics::Graphics() {
    SDL_CreateWindowAndRenderer(640,480, 0, &window, &renderer);
    SDL_SetWindowTitle(window, "Cave Story");
}

Graphics::~Graphics() {
    SDL_DestroyWindow(window);
}