#include <bits/stdc++.h>
#include <conio.h>
#define SIZE 5
using namespace std;

class Employee
{
    int id;
    char name[100];
    char dsgn[100];
    float salary;

public:
    void scanData()
    {
        cout << "\nEnter ID: ";
        cin >> id;
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "\nEnter dsgn: ";
        cin >> dsgn;
        cout << "\nEnter salary: ";
        cin >> salary;
    }

    void dispData()
    {
        cout << id << "\t" << name << "\t" << dsgn << "\t" << salary << "\n";
    }
};

int main()
{
    int i;
    Employee e[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        e[i].scanData();
    }

    for (i = 0; i < SIZE; i++)
    {
        e[i].dispData();
    }

    return 0;
}