#ifndef CONSTANTS_H
#define CONSTANTS_H

const double gravitationalAccel=-9.81;
const double velocityBoost=20;

//used in Track.cpp

const double numberOfGridElements = 20; //you divide the graphicsView in a grid with noOfGridEl^2 squares

//probabilities regarding block creation for track
const double probabilityToGoBlockUpDown = 0.4;
const double probabilityToNoBlock = 0.1;
const int maxHeightChange = 2;
const int maxMissingBlocks = 2;
#endif // CONSTANTS_H
