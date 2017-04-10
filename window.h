#ifndef WINDOW_H
#define WINDOW_H
#include "Game/game.h"
#include "gameinfoblock.h"

class Window
{
    sf::Window MWindow;
    Game MainGame;
public:
    Window();
    void Setup(GameInfoBlock&);
    void Start();
};

#endif // WINDOW_H
