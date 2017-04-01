#ifndef POINT_H
#define POINT_H


class Point
{   /*Class which implements simple 3D dynamics (position, velocity, acceleration)
    of a Point particle.*/

    double x,y,z,vx,vy,vz,ax,ay,az;

public:
    Point(double x_, double y_, double z_,
          double vx_=0, double vy_=0, double vz_=0,
          double ax_=0, double ay_=0, double az_=0);

    void SetPos(double x_, double y_, double z_);

    void SetVel(double vx_, double vy_, double vz_);

    void SetAccel(double ax_, double ay_, double az_);

    void UpdateAll(double t);

    void PrintAll();

};

#endif // POINT_H
