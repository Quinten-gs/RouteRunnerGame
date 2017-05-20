#include "qplayer.h"
#include "iostream"
#include "point.h"
#include "constants.h"
#include "QGraphicsEllipseItem"

Qplayer::Qplayer(double x, double y, QObject *parent){
//    radius = radius_;
//    location = location_;
    QGraphicsEllipseItem* ellipse= new QGraphicsEllipseItem(x, y, 20, 20);
    itemGroup->addToGroup(ellipse);
}

void Qplayer::Move(std::string direction)
{
    if (direction == "left"){
        location.IncreaseVel(-velocityBoost,0);
        return;
    }

    if (direction == "right"){
        location.IncreaseVel(velocityBoost,0);
        return;
    }

    if (direction == "up"){
        location.IncreaseVel(0,velocityBoost);
        return;
    }

    if (direction == "down"){
        location.IncreaseVel(0,-velocityBoost);
        return;
    }

    else {
        std::cerr << "ERROR: Invalid arrow input in Qplayer::Move() function.";
        std::cerr << "Only left, right, up, down allowed." << std::endl;
    }
}

void Qplayer::SetGravity(std::string on_off)
{
    if (on_off == "on"){
        location.SetAccel(0,gravitationalAccel);
        return;
    }

    if (on_off == "off"){
        location.SetAccel(0,0);
        return;
    }

    else{
        std::cerr << "ERROR: Invalid input Qplayer::SetGravity() function.";
        std::cerr << "Only two possible arguments on and off." << std::endl;
    }
}

void Qplayer::Jump()
{
    location.SetVel(0,velocityBoost);
    SetGravity("on");
}

void Qplayer::PrintAll()
{
    location.PrintAll();
}

void Qplayer::UpdateAll(double timeInterval)
{
    location.UpdateAll(timeInterval);
}


