#include "game.h"

Game::Game(QObject *parent) : QObject(parent)
{
    scores = new Highscores(15);
    game = new GameLoop();

    QObject::connect(game,SIGNAL(SIG_EndGame(QString,int)), scores, SLOT(addUser(QString,int)));

}

Game::~Game()
{
    delete game;
    delete scores;
}
