#ifndef MAPOBJECT_H
#define MAPOBJECT_H


class MapObject
{
public:
    struct coord{
        float X;
        float Y;
    };
    coord Position;
    coord Dimensions;
    bool Collidable;
    bool Clickable;
    int PosZ;
    MapObject();
    virtual void Draw();
    bool CollidesWith(MapObject);
};

#endif // MAPOBJECT_H
