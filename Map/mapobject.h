#ifndef MAPOBJECT_H
#define MAPOBJECT_H


class MapObject
{
    struct coord{
        float X;
        float Y;
    };
    coord Position;
    coord Dimensions;
public:
    int PosZ;
    virtual void Draw();
    MapObject();
    bool CollidesWith(MapObject);
};

#endif // MAPOBJECT_H
