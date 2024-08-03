#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    void getSpec()
    {
        cout << "General Vehicle :: Specifications" << endl;
    }
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
    int choice;

    cout << "\n1. TwVehicle";
    cout << "\n2. LmvVehicle";
    cout << "\n3. HmvVehicle";
    cout << "\nEnter the Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        TwVehicle tw;
        tw.getSpec();
        break;

    case 2:
        LmvVehicle lmv;
        lmv.getSpec();
        break;

    case 3:
        HmvVehicle hmv;
        hmv.getSpec();
        break;
    }
    return 0;
}