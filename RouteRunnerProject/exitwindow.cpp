#include "exitwindow.h"
#include "ui_exitwindow.h"

ExitWindow::ExitWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExitWindow)
{
    ui->setupUi(this);
}

ExitWindow::~ExitWindow()
{
    delete ui;
}

void ExitWindow::on_exitButton_clicked()
{
    this->close();
    emit SIG_exitButton_clicked();
}

void ExitWindow::on_cancelButton_clicked()
{
    this->close();
}
