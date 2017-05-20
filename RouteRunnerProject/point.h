#ifndef POINT_H
#define POINT_H


class Point
{   /*Class which implements simple 3D dynamics (position, velocity, acceleration)
    of a point particle.*/



public:
     double x,y,vx,vy,ax,ay;
    Point ();
    Point(double x_, double y_,
          double vx_=0, double vy_=0,
          double ax_=0, double ay_=0);

    void SetPos(double x_, double y_);

    void SetVel(double vx_, double vy_);

    void SetAccel(double ax_, double ay_);

    void IncreasePos(double x_, double y_);

    void IncreaseVel(double vx_, double vy_);

    void IncreaseAccel(double ax_, double ay_);

    void UpdateAll(double timeInterval);

    void PrintAll();

};

#endif // POINT_H
