#ifndef SDL_HANDLER_HPP
#define SDL_HANDLER_HPP

#include <SDL2/SDL.h>

class SDL_Handler
{
    private:
        SDL_Window* window = NULL;
    	SDL_Surface* screen_surface = NULL;
        SDL_Surface* buffer_surface = NULL;

    public:
        SDL_Handler();
        void InitWindow();
        void DestroyWindow();
        void LoadAndApplySplashScreen();

};

#endif