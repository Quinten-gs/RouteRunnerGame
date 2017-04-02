#include <iostream>
#include <point.h>
#include <player.h>
#include <string>

using namespace std;

int main()
{
    Point p(0,0,0);
    Player Quinten(10,p);
    Quinten.PrintAll();
    Quinten.Jump();
    Quinten.PrintAll();


    for (double t=0; t<11; t++){
        Quinten.UpdateAll(1);
        Quinten.PrintAll();
    }
    
    

}
