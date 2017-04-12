#include "user.h"

User::User(std::__cxx11::string *name_, int *highscore_=0)
{
 name = *name_;
 highscore = *highscore_;
}

void User::setName(std::string newName)
{
    name = newName;
}

void User::setHighscore(int newHighscore)
{
    highscore = newHighscore;
}

void User::increaseHighscore(int ammount)
{
    highscore += ammount;
}
