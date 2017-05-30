#include "user.h"

User::User(QString name_, int highscore_=0)
{
 name = name_;
 highscore = highscore_;
}


void User::setName(QString newName)
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

bool User::operator<(const User &u)
{
    if (this->highscore < u.highscore){
        return true;
    }

    return false;
}

bool User::operator>(const User &u)
{
    return !(*this<u);
}

bool User::operator==(const User &u)
{
    if (this->name == u.name && this->highscore == u.highscore){
        return true;
    }
    return false;
}
