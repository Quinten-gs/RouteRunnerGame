#include "highscores.h"
#include <iostream>
#include <fstream>
#include <istream>

Highscores::Highscores(QObject *parent) : QObject(parent)
{

}

void Highscores::addUser(std::string name, int highscore)
{
    Users.push_back(new User(&name,&highscore));
}

void Highscores::readHighscores()
{
    std::string name, scoreStr;

    std::ifstream file("highscores.txt");

    if(!file){
        std::cout<<"error trying to open file (highscores.txt) "<<std::endl;
        exit(0);
    }


    while(file>>name>>scoreStr){
        addUser(name,std::stoi(scoreStr));
    }

    return;
}

void Highscores::writeHighscores()
{
    std::ofstream file ("highscores.txt");
    if (!file.is_open()){
        std::cout<<"error trying to open file (highscores.txt) "<<std::endl;
        exit(0);
    }
    else{
        for(unsigned int i = 0; i<Users.size(); i++){
            file << Users[i]->name << '\t' << Users[i]-> highscore << '\n';
        }
      file.close();
    }
    return;
}


