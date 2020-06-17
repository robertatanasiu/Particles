#include <iostream> 
#include <SDL2/SDL.h> 

using namespace std; 

int main(){

    const int SCREEN_WIDTH = 800; 
    const int SCREEN_HEIGHT = 600; 
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0){
        cout << "SDL init failed." << endl;
        return 1; 
    }

    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
                                          SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN); 

    if (window == NULL) {
        printf("Could not create window: %s\n", SDL_GetError());
        return 2; 
    }

    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);

    // game loop -> which is a loop that will run for that long the game is running 

    bool quit = false;

    // declare SDL event 
    SDL_Event event;  

    while(!quit){
        // Update particles 
        // Draw particles 
        // Check for messages/events 

        // this will iterate for as long as there will be an event  
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                quit = true; 
            }
        }
    }
  
    SDL_DestroyWindow(window);
    SDL_Quit(); 

    return 0;
}