#ifndef CAR_H
#define CAR_H
#include <string>
#include "Vehicle.h"

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
    void displayInfo() override
    {
        Vehicle::displayInfo();
        cout << "=== CAR INFO == " << endl;
        cout << "Number of doors: " << numDoors << endl;
    }
};

#endif