#include "sdl_handler.hpp"

SDL_Handler::SDL_Handler()
{
}

void SDL_Handler::InitializeWindow()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return;
    }


    window = SDL_CreateWindow("Asteroid", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    screen_surface = SDL_GetWindowSurface(window);

}

void SDL_Handler::DestroyWindow()
{
    SDL_FreeSurface(buffer_surface);
    buffer_surface = NULL;

    SDL_DestroyWindow(window);
    window = NULL;

    SDL_Quit();
}

void SDL_Handler::DisplaySplashScreen()
{
    buffer_surface = SDL_LoadBMP("./assets/blackbuck.bmp");
    SDL_BlitSurface(buffer_surface, NULL, screen_surface, NULL);
    SDL_UpdateWindowSurface(window);
}