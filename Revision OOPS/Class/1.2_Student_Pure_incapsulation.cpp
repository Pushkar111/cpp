#include <bits/stdc++.h>
#define SIZE 5
using namespace std;

class Student
{
    int rno;
    char name[30];
    int std;

public:
    void scanData()
    {
        cout << "\nEnter the Rno : ";
        cin >> rno;
        cout << "\nEnter the name : ";
        cin >> name;
        cout << "\nEnter the std : ";
        cin >> std;
    }

    void dispData()
    {
        cout << rno << "\t" << name << "\t" << std << "\n";
    }
};
int main()
{
    Student s[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        s[i].scanData();
    }

    for (int i = 0; i < SIZE; i++)
    {
        s[i].dispData();
    }

    return 0;
}