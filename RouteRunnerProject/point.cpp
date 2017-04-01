#include "point.h"
#include "cmath"

Point::Point(double x_, double y_, double z_,
             double vx_=0, double vy_=0, double vz_=0,
             double ax_=0, double ay_=0, double az_=0)
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

void Point::Update(double t)
{
    vx = ax*t + vx;
    vy = ay*t + vy;
    vz = az*t + vz;

    x = ax*pow(t,2)/2 + vx*t + x;
    y = ay*pow(t,2)/2 + vy*t + y;
    z = az*pow(t,2)/2 + vz*t + z;
}

void Point::PrintAll()
{
    cout << "Pos(" << x << ", " << y << ", " << z << ") \t";
    cout << "Vel(" << vx << ", " << vy << ", " << vz << ") \t";
    cout << "Accel(" << ax << ", " << ay << ", " << az << ")" << endl;
}




