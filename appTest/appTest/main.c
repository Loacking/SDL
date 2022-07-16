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
    SDL_Renderer *renderer = NULL;
    
    //Lancment SDL
    if( SDL_Init(SDL_INIT_VIDEO) != 0 ){
        SDL_ExitWithError("Initialisation SDL");
    }
    //Création fenetre + rendu
    if(SDL_CreateWindowAndRenderer(800,600, SDL_WINDOW_MINIMIZED, &window,&renderer) != 0){
        SDL_ExitWithError("Impossible de creer la fenetre et le rendu");
    }

    /*  ---------------- */
       
       if(SDL_SetRenderDrawColor(renderer,112,168,237, SDL_ALPHA_OPAQUE) != 0){
        SDL_ExitWithError("Erreur de chargement de la couleur");
    }
    
       
       if(SDL_RenderDrawPoint(renderer, 50, 150) != 0){
           SDL_ExitWithError("Impossible de dessiner un point");
    }
       
    SDL_RenderPresent(renderer);
    SDL_Delay(10000);
    /*  ---------------- */
    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return EXIT_SUCCESS;
}



