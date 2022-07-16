//
//  main.c
//  appTest
//
//  Created by Ludovic Doppler on 12/07/2022.

//gcc main.c -o prog -F/Library/Frameworks -framework SDL2 ./erreur.c (pour la compil)
//./prog pour executer le code

#include <stdio.h>
#include <SDL2/SDL.h>
#include "erreur.h"
void SDL_ExitWithError(const char *message);
int main(int argc,char * argv[]) {
    
    SDL_Window *window = NULL;
    
    //Lancment SDL
    if( SDL_Init(SDL_INIT_VIDEO) != 0 ){
        SDL_ExitWithError("Initialisation SDL");
    }
    
    //Création de la fenêtre
    window = SDL_CreateWindow("First window SDL2",
                              SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,
                              SDL_WINDOW_MINIMIZED);
    
    if(window == NULL){
        SDL_ExitWithError("Création fenetre echouee");
    }
    
    /*  ---------------- */
    SDL_Delay(6000);
    /*  ---------------- */
    
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return EXIT_SUCCESS;
}



