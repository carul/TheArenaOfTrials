#include "window.h"
#include <iostream>

Window::Window() : MainGame(MWindow)
{

}


void Window::Setup(GameInfoBlock &GIB)
{
    if(GIB.FullScreen)
        this->MWindow.create(sf::VideoMode(GIB.ResX, GIB.ResY, 32), "The Arena", sf::Style::Fullscreen);
    else
        this->MWindow.create(sf::VideoMode(GIB.ResX, GIB.ResY, 32), "The Arena");
    this->MWindow.setFramerateLimit(GIB.FrameRateLimit);
}


void Window::Start()
{
    while(this->MWindow.isOpen())
    {

    }
}
