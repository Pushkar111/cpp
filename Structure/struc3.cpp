#include <iostream>
using namespace std;
#define SIZE 2

// include sunday holiday salary in number of days works in month

struct Employees
{
    char employeeName[50];
    int employeeId;
    int totalDays, salary;
    float dailySalary;
    int daysPresent;
} s[SIZE];

int main()
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        cout << "\nEnter employee name: ";
        cin >> s[i].employeeName;

        cout << "\nEnter employee ID: ";
        cin >> s[i].employeeId;

        cout << "\nEnter daily salary: ";
        cin >> s[i].dailySalary;

        cout << "\nEnter the number of days present in the month: ";
        cin >> s[i].daysPresent;

        s[i].totalDays = s[i].daysPresent + (s[i].daysPresent / 7);

        s[i].salary = s[i].totalDays * s[i].dailySalary;
    }

    cout << "========================================================================\n";
    cout << "\nEmployee Details:\n";
    cout << "========================================================================\n";
    cout << "Name\tID\tdailySalary\tdaysPresent\tTotalSalary\n";
    cout << "------------------------------------------------------------------------\n";
    for (i = 0; i < SIZE; i++)
    {
        cout << s[i].employeeName << "\t" << s[i].employeeId << "\t" << s[i].dailySalary << "\t\t" << s[i].daysPresent << "\t\t" << s[i].salary << "\n";
    }
    cout << "========================================================================\n";

    return 0;
}
