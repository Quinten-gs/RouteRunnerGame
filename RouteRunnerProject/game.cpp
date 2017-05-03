#include "game.h"

Game::Game(QObject *parent) : QObject(parent)
{
    scores = new Highscores(15);
    GUI = new GameWindow();
    QObject::connect(GUI,SIGNAL(SIG_UserUpdate(QString, int)),scores,SLOT(addUser(QString, int)));

    GUI->show();

}

Game::~Game()
{
    delete GUI;
    delete scores;
}
