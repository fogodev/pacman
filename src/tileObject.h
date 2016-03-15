#ifndef _tileObject_h
#define _tileObject_h

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "constantsNdefines.h"
#include "textureObject.h"
#include "checkCollision.h"

typedef struct _Tile_object {
    
    void (*render)(void *self, Texture_object *texture, SDL_Renderer *gRenderer, SDL_Rect *gTileClips);
    
    SDL_Rect mBox;
    
    int mType;
    
} Tile_object;


void Tile_object_render(void *self, Texture_object *texture, SDL_Renderer *gRenderer, SDL_Rect *gTileClips);

Tile_object* Tile_object_new(Tile_object *tile, int x, int y, int tileType);

// Inicializa os tijolos no mapa
bool setTiles(Tile_object *tiles[], SDL_Rect *gTileClips);

#endif