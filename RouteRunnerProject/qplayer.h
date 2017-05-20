#ifndef QPLAYER_H
#define QPLAYER_H

#include <QObject>
#include <point.h>
#include <QGraphicsItemGroup>
class Qplayer : public QObject
{
    Q_OBJECT
public:
    Qplayer(double x, double y, QObject *parent=0);
    void Move(std::string direction);
    void SetGravity(std::string on_off);
    void Jump();
    void PrintAll();
    void UpdateAll(double timeInterval);
    QGraphicsItemGroup* itemGroup;
private:
    Point location;
    double radius;


signals:

public slots:
};

#endif // QPLAYER_H
