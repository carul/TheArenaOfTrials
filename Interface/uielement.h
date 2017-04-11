#ifndef UIELEMENT_H
#define UIELEMENT_H
#include <SFML/Graphics.hpp>

class UiElement
{
public:
    UiElement();
    virtual sf::Sprite Draw() = 0;
};

#endif // UIELEMENT_H
