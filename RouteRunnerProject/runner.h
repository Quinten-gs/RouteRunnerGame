#ifndef runner_H
#define runner_H

#include <QObject>
#include <point.h>
#include <QGraphicsItemGroup>
class Runner : public QObject
{
    Q_OBJECT
public:

    Runner(qreal x, qreal y, QObject *parent=0);
    ~Runner();
    void Move(std::string direction);
    void SetGravity(std::string on_off);
    void SetSupported(std::string on_off);
    void Jump();
    void PrintAll();
    void UpdateAll(double timeInterval);
    void exportToItemGroup();
    qreal getX();
    qreal getY();

    QGraphicsItemGroup* itemGroup;
    bool jumping;
    qreal x;
    qreal y;
    Point* location;
    QRect* rect;



signals:

public slots:
};

#endif // runner_H
