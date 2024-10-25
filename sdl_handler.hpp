#ifndef SDL_HANDLER_HPP
#define SDL_HANDLER_HPP

#include <SDL2/SDL.h>



class SDL_Handler
{
    private:
        SDL_Window* window = NULL;
    	SDL_Surface* screen_surface = NULL;
        SDL_Surface* buffer_surface = NULL;
        const int SCREEN_WIDTH = 300;
        const int SCREEN_HEIGHT = 300;
    public:

        SDL_Handler();
        void InitializeWindow();
        void DestroyWindow();
        void DisplaySplashScreen();

};

#endif