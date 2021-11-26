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

    string getMan() const;
    int getYear() const;
    void displayInfo();
};

#endif