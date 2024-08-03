#include <bits/stdc++.h>
using namespace std;

class RbiBank
{
public:
    virtual void getROI()
    {
        cout << "General RBI Bank :: getROI" << endl;
    }
};

class AxisBank : public RbiBank
{
public:
    void getROI()
    {
        cout << "AxisBank RBI Bank :: getROI" << endl;
        cout << "Rate : 8" << endl;
    }
};

class KotakBank : public RbiBank
{
public:
    void getROI()
    {
        cout << "KotakBank RBI Bank :: getROI" << endl;
        cout << "Rate : 10" << endl;
    }
};

class SbiBank : public RbiBank
{
public:
    void getROI()
    {
        cout << "SbiBank RBI Bank :: getROI" << endl;
        cout << "Rate : 12" << endl;
    }
};

int main()
{
    int choice;
    RbiBank *bptr;
    AxisBank ab;
    KotakBank kb;
    SbiBank sb;

    cout << "\n1. AxisBank";
    cout << "\n2. KotakBank";
    cout << "\n3. SbiBank";
    cout << "\nEnter the choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1: bptr = &ab;
            bptr->getROI();
            break;
    
    case 2: bptr = &kb;
            bptr->getROI();
            break;
    
    case 3: bptr = &sb;
            bptr->getROI();
            break;
    
    default:
        break;
    }

    return 0;
}