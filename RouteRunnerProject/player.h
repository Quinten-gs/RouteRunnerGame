#ifndef PLAYER_H
#define PLAYER_H
#include <QObject>
#include <point.h>
#include <string>


class Player : public QObject{
    Q_OBJECT
public:
    Player(double radius_, Point location_, QObject *parent);
    void Move(std::string direction);
    void SetGravity(std::string on_off);
    void Jump();
    void PrintAll();
    void UpdateAll(double timeInterval);
private:
    Point location;
    double radius;

signals:

public slots:
};

#endif // PLAYER_H
