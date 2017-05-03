
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RouteRunnerProject
TEMPLATE = app



SOURCES += main.cpp \
    player.cpp \
    point.cpp \
    exitwindow.cpp \
    highscoreswindow.cpp \
    controlswindow.cpp \
    user.cpp \
    gamewindow.cpp \
    highscores.cpp \
    game.cpp \
    track.cpp \
    mesh.cpp

HEADERS += \
    point.h \
    constants.h \
    player.h \
    exitwindow.h \
    highscoreswindow.h \
    controlswindow.h \
    user.h \
    gamewindow.h \
    highscores.h \
    game.h \
    track.h \
    mesh.h


FORMS += \
    exitwindow.ui \
    highscoreswindow.ui \
    controlswindow.ui \
    gamewindow.ui

DISTFILES +=
