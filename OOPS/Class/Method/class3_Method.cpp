#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>

class Student
{
    // class property -> (1) DM + (2) MF
    // default - within class
private:
    // (1) Data Member
    int rno;
    int std;
    char name[50];

public:
    // (2) Member Function --> -- function (JS) -- class -- Method(OOPS)
    void scanData()
    {
        cout << "\nEnter Rno : ";
        cin >> rno;
        cout << "\nEnter Name : ";
        cin >> name;
        cout << "\nEnter Std : ";
        cin >> std;
    }

    void dispData()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << std;
    }
};

int main()
{
    Student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        s[i].scanData();
    }

    cout << "\nRno\tName\tStd";
    cout << "\n------------------------------";
    for (i = 0; i < 5; i++)
    {
        s[i].dispData();
    }

    return 0;
}