#ifndef WINDOW_H
#define WINDOW_H
#include "Game/game.h"
#include "screen.h"
#include "gameinfoblock.h"

class Window
{
    sf::Window MWindow;
    Game MainGame;
    Screen *Display;
public:
    Window();
    void Setup(GameInfoBlock&);
    void Start();
    void CaptureGlobalEvents();
};

#endif // WINDOW_H
