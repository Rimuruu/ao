#include "windowSDL.h"

ao::windowSDL::windowSDL() {
    this->win = nullptr;
}

int ao::windowSDL::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        return -1;
    }

    this->win = SDL_CreateWindow("GAME",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        1000, 1000, 0);

    return 0;







}


int ao::windowSDL::render() {

    return 0;
}

int ao::windowSDL::exit() {
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;



}