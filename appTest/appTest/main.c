//
//  main.c
//  appTest
//
//  Created by Ludovic Doppler on 12/07/2022.
//

#include <stdio.h>
#include <SDL2/SDL.h>
int main(int argc, const char * argv[]) {
    SDL_version nb;
    SDL_VERSION(&nb);
    
    printf("Bienvenue sur la SDL %d,%d,%d !\n",nb.major,nb.minor,nb.patch);
    
    return 0;
}
