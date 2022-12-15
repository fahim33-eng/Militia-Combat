#include "initEverything.h"
Init init;

SDL_Window *gameWindow;
SDL_Renderer *gameRenderer;

void Init::init_SDL() {
    SDL_Init(SDL_INIT_EVERYTHING);
}

void Init::init_window() {
    gameWindow = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

}
void Init::init_renderer() {
    gameRenderer = SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
}
void Init::init_image() {
    IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG );
}
void Init::init_ttf_font() {
    TTF_Init();
}
void Init::init_music() {
    Mix_OpenAudio(48000, MIX_DEFAULT_FORMAT, 2, 2048);
}

void game_init() 
{
    init.init_SDL();
    init.init_window();
    init.init_image();
    init.init_music();
    init.init_ttf_font();
    init.init_renderer();
    // srand((unsigned)time(NULL));
}