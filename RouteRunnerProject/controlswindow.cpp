#include "controlswindow.h"
#include "ui_controlswindow.h"

ControlsWindow::ControlsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControlsWindow)
{
    ui->setupUi(this);
}

ControlsWindow::~ControlsWindow()
{
    delete ui;
}

void ControlsWindow::on_pushButton_clicked()
{
    this->close();
}
