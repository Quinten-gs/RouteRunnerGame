#include "highscoreswindow.h"
#include "ui_highscoreswindow.h"

HighscoresWindow::HighscoresWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HighscoresWindow)
{
    ui->setupUi(this);
}

HighscoresWindow::~HighscoresWindow()
{
    delete ui;
}

void HighscoresWindow::on_closeButton_clicked()
{
    this->close();
}


