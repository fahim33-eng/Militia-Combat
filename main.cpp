#include<bits/stdc++.h>
#include<SDL2/SDL.h>

using namespace std;

const int WIDTH = 800 , HEIGHT = 600;

int main() {
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow("Militia Combat", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, HEIGHT, WIDTH, 1);
    SDL_Event event;

    while( 1 ) {
        if (SDL_PollEvent( &event )) {
            if (SDL_QUIT == event.type) {
                break;
            }
        }
    }
    SDL_Delay(50000);
    SDL_DestroyWindow( window );
    SDL_Quit();


}