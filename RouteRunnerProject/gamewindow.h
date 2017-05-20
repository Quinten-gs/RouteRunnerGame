#ifndef GameWindow_H
#define GameWindow_H

#include <QMainWindow>
#include <string>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <track.h>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

private slots:

    void on_actionExit_triggered();

    void on_actionShow_Highscores_triggered();

    void on_actionControls_triggered();

    void on_pushButton_clicked();

    void on_actionNew_Game_2_triggered();

    void NewGame();

signals:
    void SIG_UserUpdate(QString name, int score);
    void SIG_NewGame();

private:
    Ui::GameWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
    void closePrompt();
};

#endif // GameWindow_H
