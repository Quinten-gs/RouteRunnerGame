#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "highscoreswindow.h"
#include "ui_highscoreswindow.h"
#include "exitwindow.h"
#include "ui_exitwindow.h"
#include "controlswindow.h"
#include "ui_controlswindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->errorNameLabel->setVisible(false);
}

GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::on_actionExit_triggered()
{
    ExitWindow* e = new ExitWindow();
    e->setModal(true);
    QObject::connect(e,SIGNAL(SIG_exitButton_clicked()),this,SLOT(close()));
    e->exec();
}


void GameWindow::on_actionShow_Highscores_triggered()
{
    HighscoresWindow* h = new HighscoresWindow();
    h->setModal(true);
    h->exec();
}

void GameWindow::on_actionControls_triggered()
{
    ControlsWindow* c = new ControlsWindow();
    c->setModal(true);
    c->exec();
}

void GameWindow::on_pushButton_clicked()
{   QString userName = ui->nameEdit->text();
    if (userName.isEmpty()){
        ui->errorNameLabel->setVisible(true);
    }

    else{

    }
}
