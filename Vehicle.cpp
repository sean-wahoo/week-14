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