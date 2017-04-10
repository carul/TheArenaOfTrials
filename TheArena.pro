TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lsfml-graphics -lsfml-window -lsfml-system
SOURCES += main.cpp \
    Map/mapobject.cpp \
    Game/game.cpp \
    window.cpp \
    gameinfoblock.cpp

HEADERS += \
    Map/mapobject.h \
    Game/game.h \
    window.h \
    gameinfoblock.h

