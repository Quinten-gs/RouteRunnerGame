#include "point.h"
#include "cmath"
#include "iostream"

Point::Point()
{
    x = 0; y = 0;
    vx = 0; vy = 0;
    ax = 0; ay = 0;
}

Point::Point(double x_, double y_,
             double vx_, double vy_,
             double ax_, double ay_)
{
    x = x_; y = y_;
    vx = vx_; vy = vy_;
    ax = ax_; ay = ay_;
}

void Point::SetPos(double x_, double y_)
{
    x = x_;
    y = y_;

}

void Point::SetVel(double vx_, double vy_)
{
    vx = vx_;
    vy = vy_;

}

void Point::SetAccel(double ax_, double ay_)
{
    ax = ax_;
    ay = ay_;

}

void Point::IncreasePos(double x_, double y_)
{
    x += x_;
    y += y_;

}

void Point::IncreaseVel(double vx_, double vy_)
{
    vx += vx_;
    vy += vy_;

}

void Point::IncreaseAccel(double ax_, double ay_)
{
    ax += ax_;
    ay += ay_;

}



void Point::UpdateAll(double timeInterval)
{
    //Order of calculations important (do not update velocity before position)!

    x = ax*pow(timeInterval,2)/2 + vx*timeInterval + x;
    y = ay*pow(timeInterval,2)/2 + vy*timeInterval + y;


    vx = ax*timeInterval + vx;
    vy = ay*timeInterval + vy;

}

void Point::PrintAll()
{
    std::cout << "Pos \t(" << x << ", " << y << ")" << std::endl;
    std::cout << "Vel \t(" << vx << ", " << vy << ")" << std::endl;
    std::cout << "Accel\t(" << ax << ", " << ay << ")" << std::endl << std::endl;
}




