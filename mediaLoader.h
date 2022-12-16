#ifndef MEDIALOADER
#define MEDIALOADER
#include"globalVariables.h"

SDL_Texture *loadTexture(std::string path);
SDL_Texture *loadTexturewithKey(std::string path);

extern SDL_Texture *startBackgroundTexture;
extern SDL_Texture *gameBackgroundTexture;
extern SDL_Texture *playerTexture;
extern SDL_Texture *enemyTexture;
extern SDL_Texture *bulletTexture;

extern Mix_Music *background_music;
extern Mix_Music *mainMenu_music;
extern Mix_Chunk *bullet_music;
extern Mix_Chunk *hitEnemy_music;

void loadMedia();
void closeMedia();

#endif