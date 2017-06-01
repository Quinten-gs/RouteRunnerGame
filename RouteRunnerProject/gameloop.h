#ifndef GAMELOOP_H
#define GAMELOOP_H

#include <QObject>
#include <string>
#include <QGraphicsScene>
#include <track.h>
#include <QTimer>
#include <user.h>
#include <runner.h>
#include <gamewindow.h>
#include <keypresseventfilter.h>

class GameLoop : public QObject
{
    Q_OBJECT
public:
    explicit GameLoop(QObject *parent = 0);

    GameWindow *gameUI;
    QGraphicsScene *scene;

    Track* trck;
    Runner* runnr;

    QTimer *timer;
    std::string key;
    int score;
    User* usr;

private:
    bool RunnerInsideScene();
    bool RunnerIntersectsTrack();
    bool RunnerIntersectsTrackFromAbove();
    bool RunnerIntersectsTrackFromBelow();
    bool RunnerIntersectsTrackEndBlock();
    void removeAllItems();
    void ResetScreen();
    void EndGame();

    KeyPressEventFilter* filter;

signals:
    void SIG_UserUpdate(QString userName,int score);
    void SIG_RunnerMovementInitiated(std::string movement);
    void SIG_NextGameReached(int scoredPoints);
    void SIG_EndGame(QString username,int endScore);
    void SIG_ClosingGraphics();

public slots:
    void SetKey(std::string keyValue){key = keyValue;}
    void StartLoop();
    void update();
    void updateAfterInput(std::string movement);
    void makeUser(QString userName, int score);
    void updateUser(int scoredPoints);

};

#endif // GAMELOOP_H
