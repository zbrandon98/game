#ifndef GAME_HPP
#define GAME_HPP

#include "sdl_handler.hpp"

class Game
{
    private:
        SDL_Handler handler;
        void StartGame();
        void GameLoop();
        void EndGame();
        
    public:
        Game();
        void Run();

};

#endif