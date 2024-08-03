#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    char name[100];
};

class Employee : public Person
{
private:
    int id;
    int salary;
    char dsgn[100];
    char orgname[100];

public:
    void scanData()
    {
        cout << "\nEnter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter dsgn: ";
        cin >> dsgn;
        cout << "Enter orgname: ";
        cin >> orgname;
    }

    void dispData()
    {
        cout << "\n"
             << id << "\t" << name << "\t" << salary << "\t" << dsgn << "\t" << orgname;
    }
};

int main()
{
    Employee e1;

    e1.scanData();
    e1.dispData();

    return 0;
}