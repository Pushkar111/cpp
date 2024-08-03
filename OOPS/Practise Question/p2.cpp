#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    virtual void behave()
    {
        cout << "General Person :: Behave" << endl;
    }
};

class School : public Person
{
public:
    void behave()
    {
        cout << "School behave :: Student" << endl;
    }
};

class Org : public Person
{
public:
    void behave()
    {
        cout << "Org behave :: Employee" << endl;
    }
};

class PublicPlace : public Person
{
public:
    void behave()
    {
        cout << "PublicPlace behave :: Citizen" << endl;
    }
};

int main()
{
    int choice;
    Person *pptr;
    School sc;
    Org og;
    PublicPlace pp;

    cout << "\n1. School";
    cout << "\n2. Org";
    cout << "\n3. PublicPlace";
    cout << "\nEnter the choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1: pptr = &sc;
            pptr->behave();
            break;
    
    case 2: pptr = &og;
            pptr->behave();
            break;
    
    case 3: pptr = &pp;
            pptr->behave();
            break;
    
    default:
        break;
    }

    return 0;
}