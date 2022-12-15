#ifndef INITEVERYTHING
#define INITEVERYTHING

#include "globalVariables.h"

extern SDL_Window *gameWindow;
extern SDL_Renderer *gameRenderer;

struct Init {
    void init_SDL();
    void init_window();
    void init_renderer();
    void init_image();
    void init_music();
    void init_ttf_font();
};

extern Init init;

void game_init();

#endif