#include <iostream>
#include "constants.h"
#include <cmath>

// gets initial height from user and returns it
double getInitialHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;
    return initialHeight;
}

// calculate time needed to reach the ground
double calcTime(double initialHeight)
{
    double time =ceil(sqrt(2*initialHeight/myConstants::gravity));
    return time;
}

// Returns height from ground after "seconds" seconds
double calculateHeight(double initialHeight, int seconds)
{
    // Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
    double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
    double currentHeight = initialHeight - distanceFallen;

    return currentHeight;
}

// Prints height every second till ball has reached the ground
void printHeight(double currentHeight, int sec)
{
//double currentHeight = calculateHeight(height,sec);

    if(currentHeight > 0)
    {
        if(sec == 1)
        {
            std::cout << "At " << sec << " second, the ball is at height: \t" << currentHeight <<
                      " meters\n";
        }
        else std::cout << "At " << sec << " seconds, the ball is at height:\t" << currentHeight <<
                       " meters\n";
    }
    else
    std::cout << "At " << sec << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double initialHeight)
{
    // find time needed to hit the ground
    double time = calcTime(initialHeight);

    for (int sec=0;sec <= time; ++sec)
    {
        // returns current height
        double height = calculateHeight(initialHeight, sec);
        printHeight(height, sec);
    }
}

int main()
{
    // get initial height from user
    const double initialHeight = getInitialHeight();

    calculateAndPrintHeight(initialHeight);

    return 0;
}