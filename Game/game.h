#ifndef GAME_H
#define GAME_H
#include "Map/mapobject.h"
#include <vector>
#include <SFML/Window.hpp>

class Game
{
    std::vector<MapObject> MapObjects;
    sf::Window * ParentWindow;
public:
    void DrawGame();
    Game(sf::Window&);
};

#endif // GAME_H
