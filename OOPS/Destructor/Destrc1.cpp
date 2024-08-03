#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int rno;
    char name[100];
    int std;

public:
    // Default constructor
    Student()
    {
        cout << "\nSTART :: Default constructor---" << this;
        rno = 1;
        strcpy(name, "Rahul");
        std = 12;
        cout << "\nEND :: Default constructor---" << this;
    }

    void dispData()
    {
        cout << "\n" << rno << "\t" << name << "\t" << std;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor Called---" << this;
    }
};

int main()
{
    Student s1, s2, s3, s4, s5;

    s1.dispData();
    s2.dispData();
    s3.dispData();
    s4.dispData();
    s5.dispData();

    return 0;
}