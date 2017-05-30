#ifndef HIGHSCORESWINDOW_H
#define HIGHSCORESWINDOW_H

#include <QDialog>
#include <highscores.h>

namespace Ui {
class HighscoresWindow;
}

class HighscoresWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HighscoresWindow(QWidget *parent = 0);
    ~HighscoresWindow();
    Highscores scores;

private slots:

    void on_closeButton_clicked();

private:
    Ui::HighscoresWindow *ui;
};

#endif // HIGHSCORESWINDOW_H
