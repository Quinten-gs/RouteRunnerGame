#ifndef HIGHSCORES_H
#define HIGHSCORES_H

#include <QObject>
#include "user.h"
#include <vector>

class Highscores : public QObject
{
    Q_OBJECT
public:
    explicit Highscores(QObject *parent = 0);
    void addUser(std::string name, int highscore);

private:
    void readHighscores();
    void writeHighscores();
    std::vector<User*> Users;

signals:

public slots:
};

#endif // HIGHSCORES_H
