#include <iostream>
#include "constants.h"
#include <cmath>

//namespace Myconstants {

double get_height()
{
    std::cout << "Enter height: ";
    double total_height;
    std::cin >> total_height;
    return(total_height);
}

double ball_height(double total_height, int sec)
{
    double dist_fall = Myconstants::gravity_const * pow(sec,2) / 2;
    double current_height = total_height - dist_fall;
    return current_height;
}

void printHeight(double current_height, int sec)
{
    if (current_height > 0.0)
        std::cout << "At " << sec << " seconds, that ball is at height: " << current_height << " meters\n";
    else
        std::cout << "The ball is on the ground\n";
}

void calcandPrint(double total_height, int sec)
{
    double current_height = ball_height(total_height, sec);
    printHeight(current_height,sec);
}

int main()
{
    double total_height = get_height();
    calcandPrint(total_height, 0);
    calcandPrint(total_height, 1);
    calcandPrint(total_height, 2);
    calcandPrint(total_height, 3);
    calcandPrint(total_height, 4);
    calcandPrint(total_height, 5);
}