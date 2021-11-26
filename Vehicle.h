#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>

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
    virtual void displayInfo()
    {
        cout << "=== VEHICLE INFO ===" << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year built: " << year << endl;
    }
};

#endif