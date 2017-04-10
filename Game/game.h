#ifndef GAME_H
#define GAME_H
#include "Map/mapobject.h"
#include "../screen.h"
#include <vector>
#include <SFML/Window.hpp>

class Game : public Screen
{
    std::vector<MapObject> MapObjects;
    sf::Window * ParentWindow;
public:
    void DrawGame();
    void Click(float x, float y, bool right = false);
    Game(sf::Window&);
};

#endif // GAME_H
