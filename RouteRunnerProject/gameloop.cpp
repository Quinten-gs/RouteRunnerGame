#include "gameloop.h"
#include <QObject>
#include <QMainWindow>
#include <string>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <constants.h>


#include <iostream>
#include <chrono>
#include <thread>

#include <unistd.h>
#include <track.h>
#include <point.h>
#include <runner.h>
#include <gamewindow.h>
#include <iostream>
#include <QPropertyAnimation>
#include <keypresseventfilter.h>

GameLoop::GameLoop(QObject *parent) : QObject(parent)
{
    //make QGraphicsItemGroups, QGraphicsScene and draw everything;
    gameUI = new GameWindow();

    scene = gameUI->scene;

    trck = new Track(gameUI->widthScene, gameUI->heightScene);
    runnr = new Runner(runnerX,runnerY);

    QObject::connect(gameUI,SIGNAL(SIG_NewGame()),this,SLOT(StartLoop()));

    QObject::connect(gameUI,SIGNAL(SIG_NewUser(QString,int)),this,SLOT(makeUser(QString,int)));

    QObject::connect(this,SIGNAL(SIG_NextGameReached(int)),this,SLOT(updateUser(int)));

    //QObject::connect(this,SIGNAL(SIG_NextGameReached(int)),gameUI,SLOT(updateScore(int)));

    QObject::connect(this,SIGNAL(SIG_ClosingGraphics()),gameUI,SLOT(endGame()));





}

void GameLoop::update()
{
    if (RunnerInsideScene() == false){
        EndGame();
        return;
    }

    if (RunnerIntersectsTrack() == false){
        runnr->jumping = true;
    }

    if (RunnerIntersectsTrackEndBlock()==true){

        emit SIG_NextGameReached(scoredPointsEachRound);
        ResetScreen();
    }

    if (RunnerIntersectsTrackFromBelow()){
        //std::cout << "collision from ABOVE" << '\n';
        runnr->SetSupported("off");

        gameUI->removeItem(runnr->itemGroup);
        runnr->UpdateAll(refreshTimeForCalc);
        gameUI->addItem(runnr->itemGroup);
        return;
    }

    if (RunnerIntersectsTrackFromAbove()){ //signs are switched (up is down)
        //std::cout <<"collision from below" << '\n';
        runnr->SetSupported("on");
        runnr->location->vy = 0;

        gameUI->removeItem(runnr->itemGroup);
        runnr->UpdateAll(refreshTimeForCalc);
        gameUI->addItem(runnr->itemGroup);
        return;
    }

    runnr->SetSupported("off");
    gameUI->removeItem(runnr->itemGroup);
    runnr->UpdateAll(refreshTimeForCalc);
    gameUI->addItem(runnr->itemGroup);
    return;
}


void GameLoop::updateAfterInput(std::string movement)
{
    if (movement=="up"){

        runnr->Jump();
    }

    else{
        runnr->Move(movement);
    }

    update();
    return;
}

void GameLoop::makeUser(QString userName, int score)
{
    usr = new User(userName,score);
}

void GameLoop::updateUser(int scoredPoints)
{
    usr->increaseHighscore(scoredPoints);
}


bool GameLoop::RunnerInsideScene()
{
    qreal runnrX = runnr->getX();
    qreal runnrY = runnr->getY();

    return (runnrX<=trck->maxX && runnrX>=trck->minX && runnrY<=trck->maxY && runnrY >= trck->minY);
}

bool GameLoop::RunnerIntersectsTrack()
{
    bool colliding;
    Qt::ItemSelectionMode mode = Qt::IntersectsItemShape;
    for (unsigned int i = 0; i < trck->blockItems.size(); i++){
        colliding = runnr->itemGroup->collidesWithItem(trck->blockItems[i],mode);
        if (colliding == true){

            return colliding;
        }
    }
    return false;

}

bool GameLoop::RunnerIntersectsTrackFromAbove()
{
    bool intersects;
    intersects = (RunnerIntersectsTrack() && (runnr->location->vy >= 0));
    if (intersects == true){
        runnr->jumping = false;
        return true;
    }
    return false;
}

bool GameLoop::RunnerIntersectsTrackFromBelow()
{
    return (RunnerIntersectsTrack() && (runnr->location->vy <0)); //again, for some reason signs are switched (up is down)
}

bool GameLoop::RunnerIntersectsTrackEndBlock()
{
    Qt::ItemSelectionMode mode = Qt::IntersectsItemShape;

    return runnr->itemGroup->collidesWithItem(trck->blockItems[trck->blockItems.size()-1],mode);
}

void GameLoop::removeAllItems(){

    QList<QGraphicsItem*> itemsList = gameUI->scene->items();
    std::cout << " items = "<< itemsList.size();
    QList<QGraphicsItem*>::iterator iter = itemsList.begin();
    QList<QGraphicsItem*>::iterator end = itemsList.end();
    while(iter != end)
    { QGraphicsItem* item = (*iter); gameUI->scene->removeItem(item); iter++; }
}

void GameLoop::ResetScreen()
{
    //removeAllItems();
    scene->removeItem(trck->itemGroup);
    scene->removeItem(runnr->itemGroup);

    // I have no idea why the following 5 lines work. I tried a 100 variations but this does the job.
    // Problem: I can just assign a new Runner after removing the old one from the scene, but I can't just do
    // trck = new Track(gameUI->widthScene, gameUI->heightScene)?. However if I do it in multiple steps
    // it works just fine.  ¯\_(ツ)_/¯

    runnr = new Runner(runnerX, runnerY);
    Track* trck2;
    trck2 = new Track(gameUI->widthScene, gameUI->heightScene);
    trck = trck2;
    scene->addItem(trck2->itemGroup);

    gameUI->updateScore(usr->highscore);
    return;
}

void GameLoop::EndGame()
{
    timer->stop();
    std::cout << "endgame reached" << '\n';
    removeAllItems();
    emit SIG_EndGame(usr->name,usr->highscore);
    emit SIG_ClosingGraphics();

}

void GameLoop::StartLoop()
{
    if (gameUI == NULL){
        gameUI = new GameWindow;
    }

    gameUI->addItem(runnr->itemGroup);
    gameUI->addItem(trck->itemGroup);

    runnr->SetGravity("on");

    QObject::connect(gameUI->filter, SIGNAL(SIG_ButtonClicked(std::string)),this,SLOT(updateAfterInput(std::string)));

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(refreshTime);

}
