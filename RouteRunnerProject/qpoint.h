#ifndef qpoint_H
#define qpoint_H

#include <QObject>

class Qpoint : public QObject
{
    Q_OBJECT
public:
    qreal x,y,vx,vy,ax,ay;
    Qpoint(QObject *parent = 0);
    Qpoint(qreal x_, qreal y_,
         qreal vx_=0, qreal vy_=0,
         qreal ax_=0, qreal ay_=0);

    void SetPos(qreal x_, qreal y_);

    void SetVel(qreal vx_, qreal vy_);

    void SetAccel(qreal ax_, qreal ay_);

    void IncreasePos(qreal x_, qreal y_);

    void IncreaseVel(qreal vx_, qreal vy_);

    void IncreaseAccel(qreal ax_, qreal ay_);

    void UpdateAll(qreal timeInterval);

    void PrintAll();

signals:

public slots:
};

#endif // QPOINT_H
