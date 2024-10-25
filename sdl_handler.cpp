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
    
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(renderer, 0xAA,  0xAA, 0xAA, 0xFF);
    SDL_RenderPresent(renderer);
}

void SDL_Handler::DestroyWindow()
{
    SDL_DestroyRenderer(renderer);
    renderer = NULL;

    SDL_DestroyWindow(window);
    window = NULL;

    SDL_Quit();
}

void SDL_Handler::DisplaySplashScreen()
{
    SDL_Surface* image_surface = SDL_LoadBMP("./assets/blackbuck.bmp");
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, image_surface);
    
    SDL_FreeSurface(image_surface);
    image_surface = NULL;
    
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    
    SDL_DestroyTexture(texture);
    texture = NULL;
}