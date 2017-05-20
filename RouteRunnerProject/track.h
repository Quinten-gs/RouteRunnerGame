#ifndef TRACK_H
#define TRACK_H

#include <QObject>
#include <vector>
//#include <QRect>
#include <constants.h>
#include <QGraphicsItemGroup>

class Track : public QObject
{
    Q_OBJECT
public:
    explicit Track(qreal widthScene_,qreal heightScene_, QObject *parent=0);

    void GenerateRandomTrack();

//private:
    double widthScene,heightScene; //height & width from Graphicsscene element
    bool randomSuccess(double succesRate);
    int randomNo(int min, int max);

    std::pair<std::vector<double>,std::vector<double>> CalcAxisGrid();

    std::vector<QRect*> generateBlocks();
    void exportTrackToGroup();

    std::vector<QRect*> blocks;
    QGraphicsItemGroup* itemGroup;

signals:

public slots:
};

#endif // TRACK_H
