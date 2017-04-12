
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SlotsAndSignals
TEMPLATE = app



SOURCES += main.cpp \
    player.cpp \
    point.cpp \
    exitwindow.cpp \
    highscoreswindow.cpp \
    controlswindow.cpp \
    user.cpp \
    gamewindow.cpp \
    routerunnergame.cpp \
    highscores.cpp \
    game.cpp

HEADERS += \
    point.h \
    constants.h \
    player.h \
    exitwindow.h \
    highscoreswindow.h \
    controlswindow.h \
    user.h \
    gamewindow.h \
    routerunnergame.h \
    highscores.h \
    game.h


FORMS += \
    exitwindow.ui \
    highscoreswindow.ui \
    controlswindow.ui \
    gamewindow.ui
