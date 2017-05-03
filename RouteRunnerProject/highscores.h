#ifndef HIGHSCORES_H
#define HIGHSCORES_H

#include <QObject>
#include "user.h"
#include <vector>

class Highscores : public QObject
{
    Q_OBJECT
public:
    explicit Highscores(unsigned int maxScores_ = 15, QObject *parent = 0);
    ~Highscores();

    void printUsers();
    void deleteHighscores();
    void sortUsers();

private:
    void readHighscores();
    void writeHighscores();
    std::vector<User*> Users;
    unsigned int maxScores;

signals:  

public slots:
    void addUser(QString name, int score = 0);
};

#endif // HIGHSCORES_H
