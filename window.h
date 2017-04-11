#ifndef WINDOW_H
#define WINDOW_H
#include "Game/game.h"
#include "screen.h"
#include "gameinfoblock.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Window
{
    sf::RenderWindow MWindow;
    Game MainGame;
    Screen *Display;
public:
    Window();
    void Setup(GameInfoBlock&);
    void Start();
    void CaptureGlobalEvents();
};

#endif // WINDOW_H
