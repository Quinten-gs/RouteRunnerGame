#ifndef USER_H
#define USER_H
#include <string>
#include <QObject>

class User : public QObject
{
    Q_OBJECT

public:
    User();
    User(std::string* name_, int* highscore_);
    std::string name;
    int highscore;
    void setName(std::string newName);
    void setHighscore(int newHighscore);
    void increaseHighscore(int ammount);

    bool operator< (const User& u);
    bool operator> (const User& u);
    bool operator== (const User& u);

signals:

private slots:

};

#endif // USER_H
