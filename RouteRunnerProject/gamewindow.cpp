#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "highscoreswindow.h"
#include "ui_highscoreswindow.h"
#include "exitwindow.h"
#include "ui_exitwindow.h"
#include "controlswindow.h"
#include "ui_controlswindow.h"
#include "iostream"
#include "runner.h"
#include "point.h"
#include "keypresseventfilter.h"
#include <unistd.h>
#include <gameloop.h>

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->errorNameLabel->setVisible(false);
    ui->graphicsView->setVisible(false);
    ui->lostlabel->setVisible(false);
    ui->scorelabel->setVisible(false);
    QObject::connect(this,SIGNAL(SIG_NewGame()),SLOT(NewGame()));

    scene = new QGraphicsScene();

    widthScene = ui->graphicsView->width();
    heightScene = ui->graphicsView->height();

    //std::cout << "Width = "<< widthScene << "   height = " << heightScene << std::endl;

    this->show();
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::addItem(QGraphicsItem* item)
{
    scene->addItem(item);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
    return;
}

void GameWindow::removeItem(QGraphicsItem *item)
{
    scene->removeItem(item);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
}

void GameWindow::updateScore(int score)
{
    QString scorex = "Score: " + QString::number(score);
    ui->scorelabel->setText(scorex);
}

void GameWindow::endGame()
{
    std::cout << "here" << '\n';
    ui->setupUi(this);
    delete scene;
    ui->graphicsView->setVisible(false);
    ui->errorNameLabel->setVisible(false);
    ui->scorelabel->setVisible(false);
    ui->nameEdit->setVisible(false);
    ui->namelabel->setVisible(false);
    ui->textBrowser->setVisible(false);
    ui->lostlabel->setVisible(true);
    ui->pushButton->setVisible(false);
    emit SIG_UpdateHighscores();
    this->show();
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
{

    QString userName = ui->nameEdit->text();
    if (userName.isEmpty()){
        ui->errorNameLabel->setVisible(true);
        return;
    }

    ui->errorNameLabel->setVisible(false);
    ui->namelabel->setVisible(false);
    ui->nameEdit->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->graphicsView->setVisible(false);
    ui->scorelabel->setVisible(true);

    ui->graphicsView->setFocus();

    filter = new KeyPressEventFilter(this);
    scene->installEventFilter(filter);

    emit SIG_NewGame();
    emit SIG_NewUser(userName, 0);
    return;
}

void SIG_UserUpdate(QString name, int score);
void SIG_NewGame();

void GameWindow::on_actionNew_Game_2_triggered()
{

    emit SIG_NewGame();
}

void GameWindow::NewGame()
{
    ui->errorNameLabel->setVisible(false);
    ui->namelabel->setVisible(true);
    ui->nameEdit->setVisible(true);
    ui->pushButton->setVisible(true);
    ui->centralwidget->setVisible(true);
    ui->graphicsView->setVisible(false);
}
