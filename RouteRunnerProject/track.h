#ifndef TRACK_H
#define TRACK_H

#include <QObject>
#include <vector>
#include <constants.h>
#include <QGraphicsItemGroup>

class Track : public QObject
{
    Q_OBJECT
public:
    explicit Track(qreal widthScene_,qreal heightScene_, QObject *parent=0);
    ~Track();
    void GenerateRandomTrack();

    bool randomSuccess(double succesRate);

    int randomNo(int min, int max);

    std::pair<std::vector<double>,std::vector<double>> CalcAxisGrid();

    std::vector<QRect*> generateBlocks();

    void exportTrackToGroup();


    double widthScene,heightScene; //height & width from Graphicsscene element
    double numberOfElementsInTrack;
    double maxY,minY,maxX,minX; // number used to constraint runner movement
    QGraphicsItemGroup* itemGroup;
    std::vector<QRect*> blocks;
    std::vector<QGraphicsRectItem*> blockItems;


signals:

public slots:
};

#endif // TRACK_H
