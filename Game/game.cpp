#include "game.h"
#include <algorithm>

Game::Game(sf::Window & w)
{
    this->ParentWindow = &w;
}

void Game::DrawGame()
{
    std::sort(this->MapObjects.begin(), this->MapObjects.end(), [](const MapObject& lh, const MapObject& rh){
        return lh.PosZ > rh.PosZ;
    });
    for(auto obj : this->MapObjects)
    {
        obj.Draw();
    }
}
