#include "qpoint.h"
#include "cmath"
#include "iostream"

Qpoint::Qpoint()
{
    x = 0; y = 0;
    vx = 0; vy = 0;
    ax = 0; ay = 0;
}

Qpoint::Qpoint(qreal x_, qreal y_,
             qreal vx_, qreal vy_,
             qreal ax_, qreal ay_)
{
    x = x_; y = y_;
    vx = vx_; vy = vy_;
    ax = ax_; ay = ay_;
}

void Qpoint::SetPos(qreal x_, qreal y_)
{
    x = x_;
    y = y_;

}

void Qpoint::SetVel(qreal vx_, qreal vy_)
{
    vx = vx_;
    vy = vy_;

}

void Qpoint::SetAccel(qreal ax_, qreal ay_)
{
    ax = ax_;
    ay = ay_;

}

void Qpoint::IncreasePos(qreal x_, qreal y_)
{
    x += x_;
    y += y_;

}

void Qpoint::IncreaseVel(qreal vx_, qreal vy_)
{
    vx += vx_;
    vy += vy_;

}

void Qpoint::IncreaseAccel(qreal ax_, qreal ay_)
{
    ax += ax_;
    ay += ay_;

}


void Qpoint::UpdateAll(qreal timeInterval)
{
    //Order of calculations important (do not update velocity before position)!

    x = ax*pow(timeInterval,2)/2 + vx*timeInterval + x;
    y = ay*pow(timeInterval,2)/2 + vy*timeInterval + y;


    vx = ax*timeInterval + vx;
    vy = ay*timeInterval + vy;

}

void Qpoint::PrintAll()
{
    std::cout << "Pos \t(" << x << ", " << y << ")" << std::endl;
    std::cout << "Vel \t(" << vx << ", " << vy << ")" << std::endl;
    std::cout << "Accel\t(" << ax << ", " << ay << ")" << std::endl << std::endl;
}




