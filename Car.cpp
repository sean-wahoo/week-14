#include "Car.h"
#include <iomanip>
#include <iostream>

int Car::getNumDoors() const
{
    return numDoors;
}

void Car::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "=== CAR INFO == " << endl;
    cout << "Number of doors: " << numDoors << endl;
}