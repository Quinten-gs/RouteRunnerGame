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
    void addUser(std::string name, int score = 0);
    void printUsers();
    void deleteHighscores();
    void sortUsers();

private:
    void readHighscores();
    void writeHighscores();
    std::vector<User*> Users;
    unsigned int maxScores;
    bool compByHighscore(User* a, User* b);

signals:

public slots:
};

#endif // HIGHSCORES_H
