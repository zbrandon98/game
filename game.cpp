#include "game.hpp"

Game::Game()
{
};              

void Game::Run()
{
    handler.InitializeWindow();
    handler.DisplaySplashScreen();
    GameLoop();
    handler.DestroyWindow();
}

void Game::GameLoop()
{
    SDL_Event e; 
    bool running = true; 
    while(running)
    {
       while(SDL_PollEvent(&e))
        {
            if(e.type == SDL_QUIT)
            {
                running = false;
            }
            if (e.type == SDL_KEYDOWN)
            {
                switch (e.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    running = false;
                    break;
                
                case SDLK_UP:
                    printf("Up pressed\n");
                    SDL_SetRenderDrawColor(handler.renderer, 0x11, 0xAA, 0xAA, 0xFF);
                    break;

                case SDLK_DOWN:
                    printf("Down pressed\n");
                    SDL_SetRenderDrawColor(handler.renderer, 0x22, 0xBB, 0xBB, 0xFF);
                    break;

                case SDLK_LEFT:
                    printf("Left pressed\n");
                    SDL_SetRenderDrawColor(handler.renderer, 0x33, 0xCC, 0xCC, 0xFF);
                    break;

                case SDLK_RIGHT:
                    printf("Right pressed\n");
                    SDL_SetRenderDrawColor(handler.renderer, 0x44, 0xDD, 0xDD, 0xFF);
                    break;

                default:
                    break;
                }
            }
            SDL_RenderClear(handler.renderer);
            SDL_RenderPresent(handler.renderer);
        } 
    }
}