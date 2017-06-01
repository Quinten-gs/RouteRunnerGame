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

    void setName(QString newName);
    void setHighscore(int newHighscore);


    bool operator< (const User& u);
    bool operator> (const User& u);
    bool operator== (const User& u);

    QString name;
    int highscore;

signals:

public slots:
    void increaseHighscore(int ammount);
};

#endif // USER_H
