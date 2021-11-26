#include "Truck.h"
#include <iostream>

int Truck::getTowing() const
{
    return towing;
}

void Truck::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "=== TRUCK INFO ===" << endl;
    cout << "Towing capacity: " << towing << endl;
}