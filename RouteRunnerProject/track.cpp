#include "track.h"
#include <QRect>
#include <QGraphicsRectItem>
#include <iostream>

Track::Track(double widthScene_, double heightScene_, QObject *parent)
{
    srand(time(NULL));  //Changed from rand(). srand() seeds rand for you. // Seeding once!
    widthScene = widthScene_;
    heightScene = heightScene_;
    blocks = generateBlocks();
    itemGroup = new QGraphicsItemGroup();
    exportTrackToGroup();
}

bool Track::randomSuccess(double succesRate)
{   //returns true if random number between 0 and 100 is smaller than succesrate;

    double random = (rand() % 100 + 0); //rand is seeded by srand in class constructor
    random = random/100;
    return (random <= succesRate);
}

int Track::randomNo(int min, int max)
{   //returns random numero between min and max

    int random = (rand() % max + min); //rand is seeded by srand in class constructor

    return random;
}



std::pair<std::vector<double>,std::vector<double>> Track::CalcAxisGrid()
{
    // Calculates the xAxis & yAxis ijkingen
    // We will use these ijkingen for the (x,y) centers for the blocks of the track

    std::vector<double> xAxis, yAxis;

    double widthBlock = widthScene/numberOfGridElements;
    double heightBlock = heightScene/numberOfGridElements;
    double x,y;


    for (int i = 0; i < numberOfGridElements - 1; i++){
        if (i == 0){

            x = 0;
            y = 0;


            xAxis.push_back(x);
            yAxis.push_back(y);
        }

        if (i != 0){
            x = xAxis[i-1] + widthBlock;
            y = yAxis[i-1] + heightBlock;

            xAxis.push_back(x);
            yAxis.push_back(y);
        }

    }
    return std::make_pair(xAxis,yAxis);
}

std::vector<QRect*> Track::generateBlocks(){
    //this is a random block generator based on previous block

    double widthBlock = widthScene/numberOfGridElements;
    double heightBlock = heightScene/numberOfGridElements;
    std::vector<double> xAxis = CalcAxisGrid().first;

    int numberOfMissingBlocks,upOrDown,heightChange;
    bool skipBlock_x,updownBlock_y;
    double currentY; //introduced since it seems to be difficult to extract assigned height from previous QRect

    std::vector<QRect*> blocks;

    for (unsigned int i = 0; i < xAxis.size(); i++){
        std::cout << xAxis[i] << std::endl;

        if (i == 0){                    //making a standard starting block for each level

            currentY = 0;

            blocks.push_back(new QRect (xAxis[i],currentY,widthBlock,heightBlock));
            continue;

        }

        if (i == xAxis.size()-1){         //making a standard ending block for each level
            blocks.push_back(new QRect(xAxis[i],0,widthBlock, heightBlock));
            continue;
        }

        skipBlock_x = randomSuccess(probabilityToNoBlock);
        numberOfMissingBlocks = randomNo(0,maxMissingBlocks);

        updownBlock_y = randomSuccess(probabilityToGoBlockUpDown);

        upOrDown = randomNo(0,2);
        heightChange = randomNo(1,maxHeightChange);


        if (skipBlock_x){ //introducing a missing block -> jump
            //std::cout << "Intoducint i = " << numberOfMissingBlocks << " missing blocks." << std::endl;
            i+=numberOfMissingBlocks;
            continue;
        }

        if (updownBlock_y){

            if (upOrDown){
                //block goes up
                //std::cout << "Blocks go up with " << heightChange << " blocks." << std::endl;
                currentY -= heightBlock*heightChange; //for some reason coordinates seem to be switched, hence +-
                blocks.push_back(new QRect(xAxis[i],currentY,widthBlock, heightBlock));
                continue;
            }


            //block goes down
            //std::cout << "blocks go down with " << heightChange <<" blocks." << std::endl;
            currentY += heightBlock*heightChange;
            blocks.push_back(new QRect(xAxis[i],currentY,widthBlock, heightBlock));
            continue;
        }

         blocks.push_back(new QRect(xAxis[i],currentY,widthBlock, heightBlock));
    }

    return blocks;
}

void Track::exportTrackToGroup()
{ 

    for (unsigned int i = 0; i < blocks.size(); i++){
        itemGroup->addToGroup(new QGraphicsRectItem(*blocks[i]));
    }

//    QGraphicsRectItem* RectItem;
//    std::cout<<"blocks size" << blocks.size();
//    for (unsigned int i = 0; i<blocks.size(); i++){
//        RectItem = new QGraphicsRectItem(*blocks[i]);
//        itemGroup.addToGroup(RectItem);
//    }
    return;
}

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

