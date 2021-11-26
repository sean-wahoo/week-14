#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Vehicle.cpp"
using namespace std;

class Truck : public Vehicle
{
private:
    int towing;

public:
    Truck(string m, int y, int t) : Vehicle(m, y)
    {
        towing = t;
    }
    int getTowing() const;
    void displayInfo() const;
};

#endif