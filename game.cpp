#include "game.hpp"

Game::Game()
{
    handler.InitWindow();
};              

void Game::Run()
{
    StartGame();
    EndGame();
}

void Game::StartGame()
{
    GameLoop();
}

void Game::GameLoop()
{
    SDL_Event e; 
    bool quit = false; 
    while(quit == false)
    {
       while(SDL_PollEvent(&e))
        {
            if(e.type == SDL_QUIT)
            {
                quit = true;
            }
            if (e.type == SDL_KEYDOWN)
            {
                switch (e.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    quit = true;
                    break;
                
                case SDLK_UP:
                    printf("Up pressed\n");
                    break;

                case SDLK_DOWN:
                    printf("Down pressed\n");
                    break;

                case SDLK_LEFT:
                    printf("Left pressed\n");
                    break;

                case SDLK_RIGHT:
                    printf("Right pressed\n");
                    break;

                default:
                    break;
                }
            }
        } 
    }
}

void Game::EndGame()
{
    handler.DestroyWindow();
}