#ifndef GLOBAL
#define GLOBAL

#include <bits/stdc++.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
//All Global Variables has been Declared here

extern SDL_Window *window;
extern SDL_Renderer *renderer;
extern SDL_Event *event;
extern int is_running;
extern int is_paused;
extern Uint32 delay_event;
extern Uint32 main_menu;
extern Uint32 startTime, currentTime;
extern int totalEnemy;
extern int score;
extern int frameNumber;
extern bool flag;

#define WINDOW_HEIGHT 800
#define WINDOW_WIDTH 600
#define WINDOW_WIDTH 600
#define TITLE "Militia Combat"
#define SCORE 0
#define SPEED 5

#endif