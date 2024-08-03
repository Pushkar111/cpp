/*

(1) inline function ---> Scroll-up & scroll down-Time Waste
(2) scope resolution operator
(3) const
(4) this-> operator
(5) this keyword  --->  displaying address of object
(6) friend function with single class
(7) friend function with multiple class
(8) Inheritance

*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
    int rno;
    char name[100];
    int std;

public:
    inline void scanData();
    inline void dispData();
};
inline void Student :: scanData()
{
    cout << "\nEnter Roll No: ";
    cin >> rno;
    cout << "\nEnter Name: ";
    cin >> name;
    cout << "\nEnter Std: ";
    cin >> std;
}

inline void Student :: dispData()
{
    cout << "\n"
         << rno << "\t" << name << "\t" << std << "----" << this;
}

int main()
{
    Student s[5];

    for (int i = 0; i < 5; i++)
    {
        s[i].scanData();
    }

    for (int i = 0; i < 5; i++)
    {
        s[i].dispData();
    }

    return 0;
}