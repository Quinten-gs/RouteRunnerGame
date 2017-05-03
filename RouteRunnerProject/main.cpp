#include "gamewindow.h"
#include <QApplication>
#include <iostream>
#include <point.h>
#include <player.h>
#include <string>
#include <highscores.h>
#include <fstream>
#include <game.h>
#include <track.h>

#include <exitwindow.h>

int main(int argc, char *argv[])
{

    Track tr(10,10);
//    Point p(0,0,0);
//    Player Quinten(10,p);
//    Quinten.PrintAll();
//    Quinten.Jump();
//    Quinten.PrintAll();

//    for (double t=0; t<11; t++){
//        Quinten.UpdateAll(1);
//        Quinten.PrintAll();
//    }

//Highscore test
    /*
    Highscores scores(6);
    //scores.deleteHighscores();
    scores.addUser("test1", 100);
    scores.addUser("test2", 20);
    scores.addUser("test3",30);
    scores.addUser("test4",400);
    scores.addUser("test5", 30000);
    std::cout << "Before sorting: " << '\n';
    scores.printUsers();
    scores.sortUsers();
    std::cout << "After sorting: " << '\n';
    scores.printUsers();
    //scores.deleteHighscores();
//    */
//    QApplication a(argc, argv);
//    Game g;
//    g.scores->deleteHighscores();
//    std::cout << "Printing known users from file: " << std::endl;
//    g.scores->printUsers();
//    QString name = "Quinten";
//    g.scores->addUser(name, 199 );
//    std::cout << "Printing all with added Quinten: "<< std::endl;
//    g.scores->printUsers();


    return 0;//a.exec();
}


