#include "window.h"
#include <SFML/Graphics.hpp>

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

    this->Display = &this->MainGame;
}


void Window::Start()
{
    while(this->MWindow.isOpen())
    {
        this->MWindow.clear(sf::Color(255,0,100));
        this->CaptureGlobalEvents();
        this->MWindow.display();
    }
}

void Window::CaptureGlobalEvents()
{
    sf::Event event;
    while(this->MWindow.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            this->MWindow.close();
        }
        if(event.type == sf::Event::MouseButtonPressed)
        {
            this->Display->Click(event.mouseButton.x, event.mouseButton.y, event.mouseButton.button);
        }
    }
}
