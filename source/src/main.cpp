#include <SDL2/SDL.h>
#include <stdio.h>
#include "graphics.h"

int main() {
    Graphics graphics;
    bool quit = false;
    SDL_Event e;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }
    return 0;
}
  