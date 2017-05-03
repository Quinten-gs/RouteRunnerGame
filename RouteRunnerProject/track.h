#ifndef TRACK_H
#define TRACK_H

#include <QObject>
#include <vector>
//#include <QRect>
#include <constants.h>

class Track : public QObject
{
    Q_OBJECT
public:
    explicit Track(double widthScene_,double heightScene_, QObject *parent = 0);

    void GenerateRandomTrack();

//private:
    double widthScene,heightScene; //height & width from Graphicsscene element
    int RandomNo(int min, int max);
    std::vector<QRect*> blocks;
signals:

public slots:
};

#endif // TRACK_H
