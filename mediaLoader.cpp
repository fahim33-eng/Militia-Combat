#include "mediaLoader.h"

extern SDL_Texture *startBackgroundTexture;
extern SDL_Texture *gameBackgroundTexture;
extern SDL_Texture *playerTexture;
extern SDL_Texture *enemyTexture;
extern SDL_Texture *bulletTexture;

extern Mix_Music *background_music;
extern Mix_Music *mainMenu_music;
extern Mix_Chunk *bullet_music;
extern Mix_Chunk *hitEnemy_music;

SDL_Texture* loadTexture(std::string path) 
{
      SDL_Texture* newTexture = NULL;
      SDL_Surface* loadedSurface = IMG_Load(path.c_str());
      newTexture = SDL_CreateTextureFromSurface(renderer,loadedSurface);
      SDL_FreeSurface(loadedSurface);
      loadedSurface=NULL;
      return newTexture;
}

void loadMedia() {
    startBackgroundTexture = loadTexture("assets/obj & background/mainmenubg.png");
    gameBackgroundTexture = loadTexture("assets/obj & background/mainmenubg.png");
    playerTexture = loadTexture("assets/obj & background/mainmenubg.png");
    enemyTexture = loadTexture("assets/obj & background/mainmenubg.png");
    bulletTexture = loadTexture("assets/obj & background/mainmenubg.png");
    background_music = Mix_LoadMUS("assets/audio/gmusic.mp3");
    mainMenu_music = Mix_LoadMUS("assets/audio/gmusic.mp3");
    bullet_music = Mix_LoadWAV("assets/audio/gmusic.mp3");
    hitEnemy_music = Mix_LoadWAV("assets/audio/gmusic.mp3");
}

void closeMedia() {
    SDL_DestroyTexture(startBackgroundTexture);
    SDL_DestroyTexture(gameBackgroundTexture);
    SDL_DestroyTexture(playerTexture);
    SDL_DestroyTexture(enemyTexture);
    SDL_DestroyTexture(bulletTexture);
    Mix_FreeMusic(background_music);
    Mix_FreeMusic(mainMenu_music);
    Mix_FreeChunk(bullet_music);
    Mix_FreeChunk(hitEnemy_music);
}