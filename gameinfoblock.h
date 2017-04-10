#ifndef GAMEINFOBLOCK_H
#define GAMEINFOBLOCK_H
#include <string>

class GameInfoBlock
{
public:
    int ResX;
    int ResY;
    bool FullScreen;
    int FrameRateLimit;
    GameInfoBlock();
    bool Load(std::string);
};

#endif // GAMEINFOBLOCK_H
