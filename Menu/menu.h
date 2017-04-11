#ifndef MENU_H
#define MENU_H
#include "../screen.h"
#include "../Interface/uielement.h"
#include <vector>

class Menu : Screen
{
public:
    std::vector<UiElement> elements;
    Menu();
    void Click(float x, float y, bool right = false);
};

#endif // MENU_H
