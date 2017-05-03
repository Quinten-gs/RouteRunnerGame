#include "mesh.h"


Mesh::Mesh(QObject *parent)
{
}

bool Mesh::ItemCollides(QGraphicsItemGroup *item)
{
    //Detecting any collision of object item with any object in itemList.

    for (int i = 0; i < itemList.size(); i++){
        if (itemList[i]->collidesWithItem(item)){
            return true;
        }
    }
    return false;
}

void Mesh::addItemGroup(QGraphicsItemGroup* item)
{
    itemList.push_back(item);
    return;
}

//std::pair<int,int> Mesh::ToCornerCoorConv(double xcentral, double ycentral)
//{
//    int xcorner,ycorner;

//    xcorner = xcentral + widthScene/2;
//    ycorner = ycentral + heightScene/2;

//    std::pair<int,int> p(xcorner,ycorner);
//    return p;
//}

//std::pair<int, int> Mesh::ToCentralCoorConv(double xcorner, double ycorner)
//{
//    int xcentral,ycentral;

//    xcentral = xcorner - widthScene/2;
//    ycentral = ycorner - heightScene/2;

//    std::pair<int,int> p(xcentral,ycentral);
//    return p;

//}

//std::vector<int> Mesh::CalcBlockPositions(int min, int max, int noOfElements)
//{
//    //We're working in corner coordinates here.

//    int difference = std::abs(max - min);
//    int singleElementLength = difference/noOfElements;

//    std::vector<int> positions;

//    for (int i = 0; i<=noOfElements; i++){
//        if (positions.size() == 0) {
//            positions.push_back(0);
//        }

//        else {
//            positions.push_back(positions[i-1]+singleElementLength);
//        }
//    }

//    return positions;
//}





