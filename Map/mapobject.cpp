#include "mapobject.h"

MapObject::MapObject()
{

}

void MapObject::Draw()
{
    //TODO: remove this later
    for(;;){

    }
}

bool MapObject::CollidesWith(MapObject toCompare)
{
    if((this->Position.X+this->Dimensions.X < toCompare.Position.X) &&
    (this->Position.Y+this->Dimensions.Y < toCompare.Position.Y) &&
    (this->Position.X > toCompare.Position.X + toCompare.Dimensions.X) &&
    (this->Position.Y > toCompare.Position.Y + toCompare.Dimensions.Y))
        return false;
    return true;
}
