#include "gamewindow.h"
#include <QApplication>
#include <iostream>
#include <point.h>
#include <player.h>
#include <string>

#include <exitwindow.h>

int main(int argc, char *argv[])
{
    Point p(0,0,0);
    Player Quinten(10,p);
    Quinten.PrintAll();
    Quinten.Jump();
    Quinten.PrintAll();

    for (double t=0; t<11; t++){
        Quinten.UpdateAll(1);
        Quinten.PrintAll();
    }

    QApplication a(argc, argv);
    /*
    ExitWindow e;
    e.show();
    */

    GameWindow w;
    w.show();

    return a.exec();
}


