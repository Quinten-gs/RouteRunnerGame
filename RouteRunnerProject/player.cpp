#include "player.h"

Player(double radius_, double x_, double y_, double z_);


Player::Player(double radius_, double x_, double y_, double z_)
{
    radius = radius_;
    x = x_;
    y = y_;
    z = z_;
}

void Player::Move(string direction, double ammount)
{
    switch(direction)

    case "left":
        x -= ammount;
        break;

    case "right":
        x += ammount;
        break;

    case "up" :
        y += ammount;
        break;

    case "down" :
        y -= ammount;
        break;

    default:
        cerr << "Invalid arrow input in Player::Move() function.";
        cerr << "Only left, right, up, down allowed." << endl;
        break;
}


void Player::Jump()
{

}
