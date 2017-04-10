#include "window.h"
#include "gameinfoblock.h"

int main()
{
    GameInfoBlock GIB;
    GIB.Load("Settings.txt");
    Window GameWindow;
    GameWindow.Setup(GIB);
    GameWindow.Start();
    return 0;
}
