#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <QObject>

// refresh rate in ms
const qreal refreshTime = 16.6667; //16.6667 ms <=> 60 Hz
const qreal refreshTimeForCalc = refreshTime/1000; //refreshtimeforcalculations x(t) etc

const double gravitationalAccel=9.81*40;
const qreal velocityBoost=20;
const qreal velocityBoostY=200;

//used in Track.cpp

const double numberOfGridElements = 20; //you divide the graphicsView in a grid with noOfGridEl^2 squares

//begin position runner

const qreal runnerX = 0;
const qreal runnerY = -100;

//probabilities regarding block creation for track
const double probabilityToGoBlockUpDown = 0.45;
const double probabilityToNoBlock = 0.20;
const int maxHeightChange = 2;
const int maxMissingBlocks = 2;
const double sizePlayerEllipse = 25;

//Scored
const int scoredPointsEachRound = 1;
#endif // CONSTANTS_H
