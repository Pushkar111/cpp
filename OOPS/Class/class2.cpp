#include <iostream>
using namespace std;
#include <string.h>

class Employee
{
public:
    char name[50];
    int id;
    int salary;
    char dsgn[50];
    char orgname[50];
};

int main()
{
    Employee e1, e2, e3;

    cout << "\nEnter the id of e1 : ";
    cin >> e1.id;
    cout << "\nEnter the name of e1 : ";
    cin >> e1.name;
    cout << "\nEnter the salary of e1 : ";
    cin >> e1.salary;
    cout << "\nEnter the dsgn of e1 : ";
    cin >> e1.dsgn;
    cout << "\nEnter the orgname of e1 : ";
    cin >> e1.orgname;

    cout << "\nEnter the id of e2 : ";
    cin >> e2.id;
    cout << "\nEnter the name of e2 : ";
    cin >> e2.name;
    cout << "\nEnter the salary of e2 : ";
    cin >> e2.salary;
    cout << "\nEnter the dsgn of e2 : ";
    cin >> e2.dsgn;
    cout << "\nEnter the orgname of e2 : ";
    cin >> e2.orgname;

    cout << "\nEnter the id of e3 : ";
    cin >> e3.id;
    cout << "\nEnter the name of e3 : ";
    cin >> e3.name;
    cout << "\nEnter the salary of e3 : ";
    cin >> e3.salary;
    cout << "\nEnter the dsgn of e3 : ";
    cin >> e3.dsgn;
    cout << "\nEnter the orgname of e3 : ";
    cin >> e3.orgname;

    cout << "\nId\tName\tSalary\tDsgn\tOrgName\n";
    cout << e1.id << "\t" << e1.name << "\t" << e1.salary << "\t" << e1.dsgn << "\t" << e1.orgname << "\n";
    cout << e2.id << "\t" << e2.name << "\t" << e2.salary << "\t" << e2.dsgn << "\t" << e2.orgname << "\n";
    cout << e3.id << "\t" << e3.name << "\t" << e3.salary << "\t" << e3.dsgn << "\t" << e3.orgname << "\n";

    return 0;
}
