#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = 0);
    ~WelcomeWindow();

private slots:

    void on_actionExit_triggered();

    void on_actionShow_Highscores_triggered();

    void on_actionControls_triggered();

private:
    Ui::WelcomeWindow *ui;
};

#endif // WELCOMEWINDOW_H
