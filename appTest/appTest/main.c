//
//  main.c
//  appTest
//
//  Created by Ludovic Doppler on 12/07/2022.

//gcc main.c -o prog -F/Library/Frameworks -framework SDL2 (pour la compil)
//./prog pour executer le code

#include <stdio.h>
#include <SDL2/SDL.h>
int main(int argc,char * argv[]) {
    
    SDL_Window *window = NULL;
    
    
    if( SDL_Init(SDL_INIT_VIDEO) != 0 ){
        SDL_Log("Error : Initialisation SDL > %s\n",SDL_GetError());
        exit(EXIT_FAILURE);
    }
    
    //Exe du prog...
    window = SDL_CreateWindow("First window SDL2",
                              SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,
                              SDL_WINDOW_MINIMIZED);
    
    if(window == NULL){
        SDL_Log("Error : Initialisation SDL > %s\n",SDL_GetError());
        exit(EXIT_FAILURE);
    }
    
    SDL_Delay(5000);
    
    
    
    SDL_Quit();
    
    return EXIT_SUCCESS;
}
