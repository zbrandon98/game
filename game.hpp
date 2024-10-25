#ifndef GAME_HPP
#define GAME_HPP

#include "sdl_handler.hpp"

class Game
{
    private:
        SDL_Handler handler{};
        void GameLoop();
        
    public:
        Game();
        void Run();

};

#endif