#include "game.h"

Game::Game(QObject *parent) : QObject(parent)
{
    scores = new Highscores(15);
    gamelp = new GameLoop();

    QObject::connect(gamelp,SIGNAL(SIG_EndGame(QString,int)), scores, SLOT(addUser(QString,int)));

}

Game::~Game()
{
    delete gamelp;
    delete scores;
}
