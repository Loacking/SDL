//
//  erreur.c
//  appTest
//
//  Created by Ludovic Doppler on 16/07/2022.
//

#include "erreur.h"

void SDL_ExitWithError(const char *message){
    SDL_Log("Erreur : %s > %s\n",message,SDL_GetError());
    SDL_Quit();
    exit(EXIT_FAILURE);
}
