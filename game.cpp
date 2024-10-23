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
					if (e.key.keysym.sym == SDLK_ESCAPE)
					{
						quit = true;
					}

                if(e.key.keysym.sym == SDLK_UP)
                {
                    printf("Up pressed\n");
                }
                else if (e.key.keysym.sym == SDLK_DOWN)
                {
                    printf("Down pressed\n");
                }
                else if (e.key.keysym.sym == SDLK_LEFT)
                {
                    printf("Left pressed\n");
                }
                else if (e.key.keysym.sym == SDLK_RIGHT)
                {
                    printf("Right pressed\n");
                }
            }
                
            
            
        } 
    }
}

void Game::EndGame()
{
    handler.DestroyWindow();
}