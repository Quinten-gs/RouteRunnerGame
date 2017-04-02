#include "point.h"
#include "cmath"
#include "iostream"

Point::Point()
{
    x = 0; y = 0; z = 0;
    vx = 0; vy = 0; vz = 0;
    ax = 0; ay = 0; az = 0;
}

Point::Point(double x_, double y_, double z_,
             double vx_, double vy_, double vz_,
             double ax_, double ay_, double az_)
{
    x = x_; y = y_; z = z_;
    vx = vx_; vy = vy_; vz = vz_;
    ax = ax_; ay = ay_; az = az_;
}

void Point::SetPos(double x_, double y_, double z_)
{
    x = x_;
    y = y_;
    z = z_;
}

void Point::SetVel(double vx_, double vy_, double vz_)
{
    vx = vx_;
    vy = vy_;
    vz = vz_;
}

void Point::SetAccel(double ax_, double ay_, double az_)
{
    ax = ax_;
    ay = ay_;
    az = az_;
}

void Point::IncreasePos(double x_, double y_, double z_)
{
    x += x_;
    y += y_;
    z += z_;
}

void Point::IncreaseVel(double vx_, double vy_, double vz_)
{
    vx += vx_;
    vy += vy_;
    vz += vz_;
}

void Point::IncreaseAccel(double ax_, double ay_, double az_)
{
    ax += ax_;
    ay += ay_;
    az += az_;
}



void Point::UpdateAll(double timeInterval)
{
    //Order of calculations important (do not update velocity before position)!

    x = ax*pow(timeInterval,2)/2 + vx*timeInterval + x;
    y = ay*pow(timeInterval,2)/2 + vy*timeInterval + y;
    z = az*pow(timeInterval,2)/2 + vz*timeInterval + z;

    vx = ax*timeInterval + vx;
    vy = ay*timeInterval + vy;
    vz = az*timeInterval + vz;

}

void Point::PrintAll()
{
    std::cout << "Pos \t(" << x << ", " << y << ", " << z << ")" << std::endl;
    std::cout << "Vel \t(" << vx << ", " << vy << ", " << vz << ")" << std::endl;
    std::cout << "Accel\t(" << ax << ", " << ay << ", " << az << ")" << std::endl << std::endl;
}




