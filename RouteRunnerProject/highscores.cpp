#include "highscores.h"
#include <iostream>
#include <fstream>
//#include <ifstream>

Highscores::Highscores(unsigned int maxScores_,QObject *parent) : QObject(parent)
{
 maxScores = maxScores_;
 readHighscoresfromTxt();
}

Highscores::~Highscores()
{
 writeHighscorestoTxt();
 deleteHighscores(); //vector of pointers -> cleaning allocated memory;
}

void Highscores::addUser(QString name, int score)
{

    Users.push_back(new User(name,score));

    sortUsers();

    if (Users.size() > maxScores){
        delete Users[Users.size()];   //delete data from pointer
        Users.pop_back();               //delete pointer in vector
    }
}

void Highscores::readHighscoresfromTxt()
{
    std::string name, scoreStr;

    std::ifstream file;
    file.open("highscores.txt");

    if(!file.is_open()){
        std::cerr<<"error trying to open file (highscores.txt) "<<std::endl;
        exit(0);
    }


    while(file>>name>>scoreStr){
        QString QName;
        QName = QString::fromStdString(name);
        addUser(QName,std::stoi(scoreStr));
    }

    return;
}

void Highscores::writeHighscorestoTxt()
{

    std::ofstream file;
    file.open("highscores.txt");

    if (!file.is_open()){
        std::cerr<<"error trying to open file (highscores.txt) "<<std::endl;
        exit(0);
    }
    else{
        std::string name ;
        QString QName;
        for(unsigned int i = 0; i<Users.size(); i++){
            QName = Users[i]->name;
            name = QName.toStdString();
            file << name << '\t' << Users[i]-> highscore << '\n';
        }
      file.close();
    }
    return;
}



void Highscores::sortUsers()
{   // Bubble sort algoritm used here
    // std::sort() gave some problems since vector consists of pointers and we want to sort on member fn.
    // It's not impossible to get sort() to work but this was faster and it does the job.

    if (Users.size() <= 1){
        return;
    }

    unsigned int n = Users.size();
    for(unsigned int x=0; x<n; x++)

        {

            for(unsigned int y=0; y<n-1; y++)

            {

                if(Users[y]->highscore > Users[y+1]->highscore)

                {

                    User* temp = Users[y+1];

                    Users[y+1] = Users[y];

                    Users[y] = temp;

                }

            }

        }
    std::reverse(Users.begin(), Users.begin()+Users.size()); //highest highscore first in vector
}

QString Highscores::OutputScore(int i)
{
    return Users[i]->name +'\t' + QString::number(Users[i]->highscore);
}

void Highscores::printUsers()
{
    QString QName;
    std::string name;
    for(unsigned int i = 0; i<Users.size(); i++){
        QName = Users[i]->name;
        name = QName.toStdString();
        std::cout << name << '\t' << Users[i]-> highscore << '\n';
    }
}

void Highscores::deleteHighscores()
{
    for(unsigned int i = 0; i<Users.size(); i++){
        delete Users[i];
    }

    Users.clear();
}
