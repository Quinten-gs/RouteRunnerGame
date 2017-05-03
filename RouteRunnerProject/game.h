#ifndef GAME_H
#define GAME_H

#include "gamewindow.h"
#include "highscores.h"

#include <QObject>

class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = 0);
    ~Game();

    Highscores* scores;
    GameWindow* GUI;

private:

signals:

public slots:
};

#endif // GAME_H
