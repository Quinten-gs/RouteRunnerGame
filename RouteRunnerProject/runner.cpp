#include "runner.h"
#include "iostream"
#include "point.h"
#include "constants.h"
#include "QGraphicsEllipseItem"

Runner::Runner(qreal x_, qreal y_, QObject *parent){
    x = x_;
    y = y_;
    location = new Point(x,y);
    itemGroup = new QGraphicsItemGroup();
    exportToItemGroup();
    jumping = false; //Runner is currently not jumping so you can jump
}

Runner::~Runner()
{
    delete itemGroup;
    itemGroup = NULL;
}

void Runner::Move(std::string direction)
{

    if (direction == "left"){
        location->IncreaseVel(-velocityBoost,0);
        //UpdateAll(time);
        //itemGroup->setPos(location->x,location->y);
        return;
    }

    if (direction == "right"){
        std::cout << "location.x = " << location->x << '\n';
        location->IncreaseVel(velocityBoost,0);
        //UpdateAll(time);
        //itemGroup->setPos(location->x,location->y);
        return;
    }

    if (direction == "up"){
        location->IncreaseVel(0,velocityBoost);
        //UpdateAll(time);
        //itemGroup->setPos(location->x,location->y);
        return;
    }

    if (direction == "down"){
        location->IncreaseVel(0,-velocityBoost);
        //UpdateAll(time);
        //itemGroup->setPos(location->x,location->y);
        return;
    }

    else {
        std::cerr << "ERROR: Invalid arrow input in Runner::Move() function.";
        std::cerr << "Only left, right, up, down allowed." << std::endl;
    }

}

void Runner::SetGravity(std::string on_off)
{
    if (on_off == "on"){
        location->SetAccel(0,gravitationalAccel);
        return;
    }

    if (on_off == "off"){
        location->SetAccel(0,0);
        return;
    }

    else{
        std::cerr << "ERROR: Invalid input Runner::SetGravity() function.";
        std::cerr << "Only two possible arguments on and off." << std::endl;
    }
}

void Runner::SetSupported(std::__cxx11::string on_off)
{
    if (on_off == "on"){
        SetGravity("off");
        location->SetVel(location->vx,0);
        return;
    }

    SetGravity("on");
    return;
}


void Runner::Jump()
{
    if (jumping == false){
        location->SetVel(location->vx,-velocityBoostY);
        SetGravity("on");
    }

    return;
}

void Runner::PrintAll()
{
    location->PrintAll();
}

void Runner::UpdateAll(double timeInterval)
{

    location->UpdateAll(timeInterval);
    itemGroup->setPos(location->x,location->y);
}

void Runner::exportToItemGroup()
{
    delete itemGroup;
    itemGroup = new QGraphicsItemGroup();
    rect = new QRect(location->x,location->y,sizePlayerEllipse,sizePlayerEllipse);
    itemGroup->addToGroup(new QGraphicsEllipseItem(*rect));
}

qreal Runner::getX()
{
    return location->x;
}

qreal Runner::getY()
{
    return location->y;
}

