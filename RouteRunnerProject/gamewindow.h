#ifndef GameWindow_H
#define GameWindow_H

#include <QMainWindow>
#include <string>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <track.h>
#include <keypresseventfilter.h>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();
    QGraphicsScene *scene;

    qreal widthScene;
    qreal heightScene;
    KeyPressEventFilter* filter;

    void addItem(QGraphicsItem* item);
    void removeItem(QGraphicsItem* item);


public slots:
    void updateScore(int score);

    void on_actionExit_triggered();

    void on_actionShow_Highscores_triggered();

    void on_actionControls_triggered();

    void on_pushButton_clicked();

    void on_actionNew_Game_2_triggered();

    void NewGame();

    void endGame();


signals:
    void SIG_NewUser(QString name, int score);
    void SIG_NewGame();
    void SIG_UpdateHighscores();

private:
    Ui::GameWindow *ui;

    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
    void closePrompt();
};

#endif // GameWindow_H
