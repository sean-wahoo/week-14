#include "Vehicle.h"
#include <iomanip>
#include <iostream>

string Vehicle::getMan() const
{
    return manufacturer;
}

int Vehicle::getYear() const
{
    return year;
}

void Vehicle::displayInfo() const
{
    cout << "=== VEHICLE INFO ===" << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year built: " << year << endl;
}