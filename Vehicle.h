#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

using namespace std;

class Vehicle
{
private:
    string manufacturer;
    int year;

public:
    Vehicle(string m, int y)
    {
        manufacturer = m;
        year = y;
    };

    virtual string getMan() const;
    virtual int getYear() const;
    virtual void displayInfo() const;
};

#endif