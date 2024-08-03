#include <bits/stdc++.h>
using namespace std;

class Student
{
    int rno;
    char name[100];
    int std;

public:
    void setData(const int rno, const char name[], const int std)
    {
        this->rno = rno;
        strcpy(this->name, name);
        this->std = std;
    }
    void dispData()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << std << "----" << this;
    }
};

int main()
{
    Student s1;

    int rno;
    char name[100];
    int std;

    rno = 1;
    strcpy(name, "Rahul");
    std = 12;

    s1.setData(rno, name, std);
    s1.dispData();

    return 0;
}