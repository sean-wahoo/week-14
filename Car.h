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
    string getMan() const;
    int getYear() const;
    int getNumDoors() const;
    void displayInfo() const;
};

#endif