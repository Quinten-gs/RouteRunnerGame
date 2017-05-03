#ifndef MESH_H
#define MESH_H

#include <QObject>
#include <QList>
#include <QGraphicsItemGroup>
#include <QGraphicsItem>

class Mesh : public QObject
{   // This object is used for adding elements to a mesh (a container of all visual elements).

    Q_OBJECT
public:
    explicit Mesh(double widthScene_,double heightScene_, QObject *parent=0);
    std::vector<int> CalcBlockPositions(int min, int max, int noOfElements);

    bool ItemIntersects(QGraphicsItemGroup* item);
    void addItemGroup(QGraphicsItemGroup* item);

signals:

public slots:

private:
    std::pair<int,int> ToCornerCoorConv(double xcentral, double ycentral);
    std::pair<int,int> ToCentralCoorConv(double xcorner, double ycorner);
    double widthScene;
    double heightScene;
    QList<QGraphicsItemGroup*> itemList;
};

#endif // MESH_H
