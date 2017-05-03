#ifndef USER_H
#define USER_H
#include <string>
#include <QObject>

class User : public QObject
{
    Q_OBJECT

public:
    User();
    User(QString* name_, int* highscore_);
    QString name;
    int highscore;
    void setName(QString newName);
    void setHighscore(int newHighscore);
    void increaseHighscore(int ammount);

    bool operator< (const User& u);
    bool operator> (const User& u);
    bool operator== (const User& u);

signals:

private slots:

};

#endif // USER_H
