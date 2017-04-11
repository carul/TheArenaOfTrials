TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lsfml-graphics -lsfml-window -lsfml-system
SOURCES += main.cpp \
    Map/mapobject.cpp \
    Game/game.cpp \
    window.cpp \
    gameinfoblock.cpp \
    screen.cpp \
    Interface/button.cpp \
    Interface/globalinterfacedata.cpp \
    Menu/menu.cpp \
    Interface/uielement.cpp

HEADERS += \
    Map/mapobject.h \
    Game/game.h \
    window.h \
    gameinfoblock.h \
    screen.h \
    Interface/button.h \
    Interface/globalinterfacedata.h \
    Menu/menu.h \
    Interface/uielement.h

