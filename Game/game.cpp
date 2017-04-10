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
    for(auto&& obj : this->MapObjects)
    {
        obj.Draw();
    }
}


void Game::Click(float x, float y, bool right)
{
    MapObject tempobj;
    tempobj.Position ={x,y};
    tempobj.Dimensions={1,1};
    for(auto&& object: this->MapObjects)
    {
        if(object.CollidesWith({tempobj}) && object.Clickable)
        {
            break;
        }
    }
}
