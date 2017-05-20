#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "highscoreswindow.h"
#include "ui_highscoreswindow.h"
#include "exitwindow.h"
#include "ui_exitwindow.h"
#include "controlswindow.h"
#include "ui_controlswindow.h"
#include "iostream"
#include "qplayer.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->errorNameLabel->setVisible(false);
    ui->graphicsView->setVisible(false);
    QObject::connect(this,SIGNAL(SIG_NewGame()),SLOT(NewGame()));
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
        return;
    }

    ui->errorNameLabel->setVisible(false);
    ui->label->setVisible(false);
    ui->nameEdit->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->graphicsView->setVisible(true);


    scene = new QGraphicsScene(this);


//    //scene->addRect(0,0,500,500);
//    QRectF rec(-200,0,100,-100);
//    QGraphicsRectItem* qrec = new QGraphicsRectItem(rec);
//    QGraphicsItemGroup* group = new QGraphicsItemGroup();
//    group->addToGroup(qrec);
//    scene->addItem(group);

//    QRectF rec2(-100,0,100,-200);
//    QRectF rec3(0,0,100,-600);

//    QGraphicsRectItem* qrec = new QGraphicsRectItem(rec);
//    QGraphicsRectItem* qrec2 = new QGraphicsRectItem(rec2);
//    QGraphicsRectItem* qrec3 = new QGraphicsRectItem(rec3);


//    QGraphicsItemGroup* group = new QGraphicsItemGroup();
//    group->addToGroup(qrec);
//    group->addToGroup(qrec2);
//    group->addToGroup(qrec3);
//    scene->addRect(rec);
//    scene->addRect(rec2);
//    scene->addRect(rec3);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
    qreal width = ui->graphicsView->width();
    qreal height = ui->graphicsView->height();

    Track track(width,height);
    Qplayer player(0.,0.);

    scene->addItem(player.itemGroup);

    scene->addItem(track.itemGroup);
    std::cout << width << "< width  and hight >" << height<<std::endl;
    emit SIG_UserUpdate(userName,0);
    return;
}

void SIG_UserUpdate(QString name, int score);
void SIG_NewGame(){};

void GameWindow::on_actionNew_Game_2_triggered()
{
    emit SIG_NewGame();
}

void GameWindow::NewGame()
{
    ui->errorNameLabel->setVisible(false);
    ui->label->setVisible(true);
    ui->nameEdit->setVisible(true);
    ui->pushButton->setVisible(true);
    ui->centralwidget->setVisible(true);
    ui->graphicsView->setVisible(false);
}
