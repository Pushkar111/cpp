#include <stdio.h>
#include <iostream>
using namespace std;
#include <string.h>

class Student
{
// private
    int rno;
    char name[50];
    int std;

public:
    // Dm's --- setData Method
    void setData(int rno, char name[], int std)
    {
        // left side - Dm's | Right side - local variable
        this->rno = rno;
        strcpy(this->name, name);
        this->std = std;
    }

    void dispData()
    {
        cout << "\n" << rno << "\t" << name << "\t" << std;
    }
};

int main()
{
    Student s;

    s.setData(1, "Ram", 12);

    cout << "\nRno\tName\tStd";
    cout << "\n--------------------";
    s.dispData();

    return 0;
}