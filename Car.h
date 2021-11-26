#ifndef CAR_H
#define CAR_H
#include "Vehicle.cpp"
#include <string>

using namespace std;

class Car : public Vehicle
{
private:
    int numDoors;

public:
    Car(string m, int y, int d) : Vehicle(m, y)
    {
        numDoors = d;
    }
    int getNumDoors() const;
    void displayInfo() const;
};

#endif