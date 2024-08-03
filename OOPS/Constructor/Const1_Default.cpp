#include <iostream>
using namespace std;
#include <string.h>

struct Student
{
    int rno;
    char name[100];
    int std;

public:
    // Default constructor
    Student()
    {
        cout << "\nSTART :: Default Constructor--" << this;
        rno = 1;
        strcpy(name, "Rahul");
        std = 12;
        cout << "\nEND :: Default Constructor";
    }
    void dispData()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << std << "---" << this;
    }
};

int main()
{
    Student s1, s2, s3;

    s1.dispData();
    s2.dispData();
    s3.dispData();

    return 0;
}