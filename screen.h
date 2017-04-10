#ifndef SCREEN_H
#define SCREEN_H


class Screen
{
public:
    Screen();
    virtual void Click(float x, float y, bool right = false) = 0;
};

#endif // SCREEN_H
