#include "highscoreswindow.h"
#include "ui_highscoreswindow.h"

HighscoresWindow::HighscoresWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HighscoresWindow)
{
    ui->setupUi(this);
    QString txt;
    for (unsigned int i = 0; i < scores.Users.size(); i++){
        ui->listWidget->addItem(scores.OutputScore(i));
    }
}

HighscoresWindow::~HighscoresWindow()
{
    delete ui;
}

void HighscoresWindow::on_closeButton_clicked()
{
    this->close();
}


