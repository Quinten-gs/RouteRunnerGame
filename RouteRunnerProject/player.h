#ifndef PLAYER_H
#define PLAYER_H


class Player{
    double radius,x,y,z;
public:
    Player(double radius_, double x_, double y_, double z_);
    void Move(string direction, double ammount);
    void Jump();
};

#endif // PLAYER_H
