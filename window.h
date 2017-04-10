#ifndef WINDOW_H
#define WINDOW_H
#include "Game/game.h"

class Window
{
    sf::Window MWindow;
    Game MainGame;
public:
    Window();
    void Setup();
};

#endif // WINDOW_H
