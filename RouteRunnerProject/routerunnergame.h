#ifndef ROUTERUNNERGAME_H
#define ROUTERUNNERGAME_H

#include <QObject>
#include "user.h"
#include "gamewindow.h"

class RouteRunnerGame : public QObject
{
    Q_OBJECT
public:
    explicit RouteRunnerGame(QObject *parent = 0);
    GameWindow GameUI;

signals:

public slots:

};

#endif // ROUTERUNNERGAME_H
