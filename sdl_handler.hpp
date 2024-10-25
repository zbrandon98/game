#ifndef SDL_HANDLER_HPP
#define SDL_HANDLER_HPP

#include <SDL2/SDL.h>



class SDL_Handler
{
    private:
        const int SCREEN_HEIGHT = 500;
        const int SCREEN_WIDTH = 500;
        SDL_Window* window = NULL;
    public:
        SDL_Renderer* renderer = NULL;

        SDL_Handler();
        void InitializeWindow();
        void InitializeMenus();
        void DisplaySplashScreen();
        void DestroyWindow();

};

#endif