#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    virtual void getSpec() = 0;
};

class TwVehicle : public Vehicle
{
public:
    void getSpec()
    {
        cout << "TwVehicle Specifications" << endl;
    }
};

class LmvVehicle : public Vehicle
{
public:
    void getSpec()
    {
        cout << "LmvVehicle Specifications" << endl;
    }
};

class HmvVehicle : public Vehicle
{
public:
    void getSpec()
    {
        cout << "HmvVehicle Specifications" << endl;
    }
};

int main()
{
    Vehicle *vptr;
    int choice;
    TwVehicle tw;
    LmvVehicle lmv;
    HmvVehicle hmv;

    cout << "\n1. TwVehicle";
    cout << "\n2. LmvVehicle";
    cout << "\n3. HmvVehicle";
    cout << "\nEnter the Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        // Up Casting
        vptr = &tw;
        // Down Casting
        ((TwVehicle*)vptr)->getSpec();
        vptr->getSpec();
        break;

    case 2:
        // Up Casting
        vptr = &lmv;
        // Down Casting
        ((LmvVehicle*)vptr)->getSpec();
        vptr->getSpec();
        break;

    case 3:
        // Up Casting
        vptr = &hmv;
        // Down Casting
        ((HmvVehicle*)vptr)->getSpec();
        vptr->getSpec();
        break;
    }
    return 0;
}