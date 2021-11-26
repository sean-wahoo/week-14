#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <memory>
#include <limits>
#include <ios>

void strict_int(int &value, int upper = numeric_limits<int>::max(), int lower = 0)
{
    while (true)
    {
        int tmp;
        cout << "-> ";
        cin >> tmp;

        if (cin.fail() || tmp > upper || tmp < lower)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please pick a valid number between " << lower << " and " << upper << "." << endl;

            continue;
        }
        value = tmp;
        return;
    }
}

int main()
{
    string vehicleMan;
    int vehicleYear;

    cout << "=== ENTERING VEHICLE INFORMATION ===" << endl;
    cout << "Enter the manufacturer: \n-> ";
    getline(cin, vehicleMan);
    cout << "Enter the year built: " << endl;
    strict_int(vehicleYear);

    Vehicle *v = new Vehicle(vehicleMan, vehicleYear);
    v->displayInfo();
    delete v;

    string carMan;
    int carYear;
    int carDoors;

    cin.clear();
    cin.ignore();
    cout << "=== ENTERING CAR INFORMATION ===" << endl;
    cout << "Enter the manufacturer: \n-> ";
    getline(cin, carMan);
    cout << "Enter the year built: " << endl;
    strict_int(carYear);
    cout << "Enter the number of doors it has: " << endl;
    strict_int(carDoors);

    Car *c = new Car(carMan, carYear, carDoors);
    c->displayInfo();
    delete c;

    cin.clear();
    cin.ignore();
    string truckMan;
    int truckYear;
    int truckTowing;
    cout << "=== ENTERING TRUCK INFORMATION ===" << endl;
    cout << "Enter the manufacturer: \n-> ";
    getline(cin, truckMan);
    cout << "Enter the year built: " << endl;
    strict_int(truckYear);
    cout << "Enter the towing capacity for the truck: " << endl;
    strict_int(truckTowing);

    Truck *t = new Truck(truckMan, truckYear, truckTowing);
    t->displayInfo();
    delete t;
}