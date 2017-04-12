#ifndef GameWindow_H
#define GameWindow_H

#include <QMainWindow>

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

private:
    Ui::GameWindow *ui;

    void closePrompt();
};

#endif // GameWindow_H
