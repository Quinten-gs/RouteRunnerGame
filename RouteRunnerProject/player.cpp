#include "player.h"
#include "iostream"
#include "point.h"
#include "constants.h"

Player::Player(double radius_, Point location_, QObject *parent=0){
    radius = radius_;
    location = location_;
}

void Player::Move(std::string direction)
{
    if (direction == "left"){
        location.IncreaseVel(-velocityBoost,0,0);
        return;
    }

    if (direction == "right"){
        location.IncreaseVel(velocityBoost,0,0);
        return;
    }

    if (direction == "up"){
        location.IncreaseVel(0,velocityBoost,0);
        return;
    }

    if (direction == "down"){
        location.IncreaseVel(0,-velocityBoost,0);
        return;
    }

    else {
        std::cerr << "ERROR: Invalid arrow input in Player::Move() function.";
        std::cerr << "Only left, right, up, down allowed." << std::endl;
    }
}

void Player::SetGravity(std::string on_off)
{
    if (on_off == "on"){
        location.SetAccel(0,0,gravitationalAccel);
        return;
    }

    if (on_off == "off"){
        location.SetAccel(0,0,0);
        return;
    }

    else{
        std::cerr << "ERROR: Invalid input Player::SetGravity() function.";
        std::cerr << "Only two possible arguments on and off." << std::endl;
    }
}

void Player::Jump()
{
    location.SetVel(0,0,velocityBoost);
    SetGravity("on");
}

void Player::PrintAll()
{
    location.PrintAll();
}

void Player::UpdateAll(double timeInterval)
{
    location.UpdateAll(timeInterval);
}


