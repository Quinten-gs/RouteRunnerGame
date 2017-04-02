#ifndef PLAYER_H
#define PLAYER_H

#include <point.h>
#include <string>


class Player{
    Point location;
    double radius;
public:
    Player(double radius_, Point location_);
    void Move(std::string direction);
    void SetGravity(std::string on_off);
    void Jump();
    void PrintAll();
    void UpdateAll(double timeInterval);
};

#endif // PLAYER_H
