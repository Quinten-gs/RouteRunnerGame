#include "track.h"
#include <QRect>

Track::Track(double widthScene_, double heightScene_, QObject *parent)
{
    widthScene = widthScene_;
    heightScene = heightScene_;
    blocks = generateBlocks();
}

int Track::randomNo(int min, int max)
{
    srand(time(NULL));  //Changed from rand(). srand() seeds rand for you.
    int random = rand() % max + min;

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

    for (int i = 0; i < numberOfGridElements; i++){
        if (i == 0){

            x = widthBlock/2;
            y = heightBlock/2;

            xAxis.push_back(x);
            yAxis.push_back(y);
        }

        if (i != 0){
            x = xAxis[i-1] + widthBlock;
            y = yAxis[i-1] + heightBlock;

            xAxis.insert(xAxis.begin(),-x);
            xAxis.push_back(x);

            yAxis.insert(yAxis.begin(),-y);
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

    double rand1,rand2,noMissingBlocks,upOrDown,heightchange;
    double currentY; //introduced since it seems to be difficult to extract assigned height from previous QRect

    std::vector<QRect*> blocks;
    for (unsigned int i = 0; i < xAxis.size(); i++){

        if (i == 0){ //making a standard starting block for each level
            currentY = 0;
            blocks.push_back(new QRect (xAxis[i],currentY,widthBlock, heightBlock));
        }

        if (i == xAxis.size() - 1){ //making a standard ending block for each level
            blocks.push_back(new QRect(xAxis[i],0,widthBlock, heightBlock));
        }

        else{
            // This part will not be extremely readable but it makes sense in my head :) I'm sorry
            rand1 = randomNo(0,100)/100;
            noMissingBlocks = randomNo(1,maxMissingBlocks);

            rand2 = randomNo(0,100)/100;
            upOrDown = randomNo(0,1);
            heightchange = randomNo(1,maxHeightChange);

            if (rand1 < probabilityToNoBlock){ //introducing a missing block -> jump
                i+=noMissingBlocks;
                continue;
            }

            if (rand2 < probabilityToGoBlockUpDown){
                if (upOrDown == 0){
                    //block goes up
                    currentY += heightBlock*heightchange;
                    blocks.push_back(new QRect(xAxis[i],currentY,widthBlock, heightBlock));
                }

                else{
                    //block goes down
                    currentY -= heightBlock*heightchange;
                    blocks.push_back(new QRect(xAxis[i],currentY,widthBlock, heightBlock));
                }

            }

        }
    }
    return blocks;
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

