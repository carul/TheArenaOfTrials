#ifndef BUTTON_H
#define BUTTON_H
#include "uielement.h"
#include <string>
#include <SFML/Graphics.hpp>

class Button : UiElement
{
public:
    sf::Sprite Self;
    std::string Name;
    bool Active;
    Button(std::string, float, float, float, float, bool = false);
    sf::Sprite ReturnDraw();
};

#endif // BUTTON_H
