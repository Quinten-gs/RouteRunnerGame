#include "highscores.h"
#include <iostream>
#include <fstream>
#include <istream>

Highscores::Highscores(unsigned int maxScores_,QObject *parent) : QObject(parent)
{
 maxScores = maxScores_;
 readHighscores();
}

Highscores::~Highscores()
{
 writeHighscores();
 deleteHighscores(); //vector of pointers -> cleaning memory needed;
}

void Highscores::addUser(std::string name, int score)
{
    Users.push_back(new User(&name,&score));
//    std::cout << '\n';
//    std::cout<< "Printing after adding " << name << '\n';
    printUsers();
    sortUsers();
//    std::cout << '\n';
//    std::cout<< "Printing after sorting " << name << '\n';
    printUsers();
    if (Users.size() > maxScores){
        delete Users[Users.size()];   //delete data from pointer
        Users.pop_back();               //delete pointer in vector
    }
//    std::cout << '\n';
//    std::cout<< "Printing after deleting last in line " << name << '\n';
    printUsers();
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

    std::ofstream file;
    file.open("highscores.txt");

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

bool Highscores::compByHighscore(User *a, User *b)
{
    return a->highscore < b->highscore;
}



void Highscores::sortUsers()
{   // Bubble sort algoritm used here
    // std::sort() gave some problems since vector arguments pointers
    // It's not impossible to get sort() to work but this was faster and it
    // does the job

    unsigned int n = Users.size();
    for(int x=0; x<n; x++)

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
    std::reverse(Users.begin(), Users.begin()+Users.size());
}

void Highscores::printUsers()
{
    for(unsigned int i = 0; i<Users.size(); i++){
        std::cout << Users[i]->name << '\t' << Users[i]-> highscore << '\n';
    }
}

void Highscores::deleteHighscores()
{
    for(unsigned int i = 0; i<Users.size(); i++){
        delete Users[i];
    }

    Users.clear();
}


