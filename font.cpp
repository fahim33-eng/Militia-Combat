#include"font.h"
#include"globalVariables.h"

TTF_Font *font1;
TTF_Font *font2;
TTF_Font *font3;


SDL_Color white = { 255, 255, 255 };
SDL_Color black = { 0, 0, 0 };
SDL_Color red = { 255, 0, 0 };



void loadTextSurface(std::string path, TTF_Font *font, SDL_Color color, SDL_Rect area)
{
    SDL_Texture *fontTexture=NULL;
    SDL_Surface *loadedSurface=TTF_RenderText_Solid(font,path.c_str(),color);
    fontTexture=SDL_CreateTextureFromSurface(renderer,loadedSurface);
    SDL_FreeSurface(loadedSurface);
    SDL_RenderCopy(renderer, fontTexture, 0, &area);
}

void font_init()
{
    font1 = TTF_OpenFont("assets/ttf_fonts/ChunkFive-Regular.otf",50);
    font2 = TTF_OpenFont("assets/ttf_fonts/hemi head bd it.ttf",50);
    font3 = TTF_OpenFont("assets/ttf_fonts/OpenSans-ExtraBold.ttf",50);
    
}


void closeFont()
{
    TTF_CloseFont(font1);
    TTF_CloseFont(font2);
    TTF_CloseFont(font3);
}