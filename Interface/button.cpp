#include "button.h"
#include "globalinterfacedata.h"

Button::Button(std::string name, float posX, float posY, float sizeX, float sizeY, bool active)
{
    this->Name = name;
    this->Active = active;
    this->Self.setScale({sizeX/this->Self.getGlobalBounds().width, sizeY/this->Self.getGlobalBounds().height});
    this->Self.setTexture(GlobalInterfaceData.ButtonBasicTexture);
    this->Self.setPosition({posX, posY});
}

sf::Sprite Button::ReturnDraw()
{
    //TODO
}
