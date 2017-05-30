#ifndef USER_H
#define USER_H
#include <string>
#include <QObject>

class User : public QObject
{
    Q_OBJECT

public:
    User();
    User(QString name_, int highscore_);
    QString name;
    int highscore;
    void setName(QString newName);
    void setHighscore(int newHighscore);


    bool operator< (const User& u);
    bool operator> (const User& u);
    bool operator== (const User& u);

signals:

public slots:
    void increaseHighscore(int ammount);
};

#endif // USER_H
