
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SlotsAndSignals
TEMPLATE = app



SOURCES += main.cpp \
    player.cpp \
    point.cpp \
    welcomewindow.cpp \
    exitwindow.cpp \
    highscoreswindow.cpp \
    controlswindow.cpp

HEADERS += \
    point.h \
    constants.h \
    player.h \
    welcomewindow.h \
    exitwindow.h \
    highscoreswindow.h \
    controlswindow.h


FORMS += \
    welcomewindow.ui \
    exitwindow.ui \
    highscoreswindow.ui \
    controlswindow.ui
