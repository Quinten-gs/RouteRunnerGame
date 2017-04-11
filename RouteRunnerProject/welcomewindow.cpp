#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "highscoreswindow.h"
#include "ui_highscoreswindow.h"
#include "exitwindow.h"
#include "ui_exitwindow.h"
#include "controlswindow.h"
#include "ui_controlswindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}



void WelcomeWindow::on_actionExit_triggered()
{
    ExitWindow* e = new ExitWindow();
    e->setModal(true);
    QObject::connect(e,SIGNAL(SIG_exitButton_clicked()),this,SLOT(close()));
    e->exec();
}


void WelcomeWindow::on_actionShow_Highscores_triggered()
{
    HighscoresWindow* h = new HighscoresWindow();
    h->setModal(true);
    h->exec();
}

void WelcomeWindow::on_actionControls_triggered()
{
    ControlsWindow* c = new ControlsWindow();
    c->setModal(true);
    c->exec();
}
