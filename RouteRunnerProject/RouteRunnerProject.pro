TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    player.cpp \
    point.cpp

HEADERS += \
    point.h \
    constants.h \
    player.h
