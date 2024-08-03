#include <iostream>
using namespace std;
#include <string.h>

class Student
{
    int rno;
    char name[100];
    int std;

public:
    // Default constructor
    Student()
    {
        cout << "\nSTART :: Default Constructor---" << this;
        rno = 1;
        strcpy(name, "Rahul");
        std = 12;
        cout << "\nEND :: Default Constructor";
    }

    // Parameterized constructor
    Student(int rno, char name[], int std)
    {
        cout << "\nSTART :: Parameterised Constructor---" << this;
        this->rno = rno;
        strcpy(this->name, name);
        this->std = std;
        cout << "\nEND :: Parameterised Constructor";
    }

    void dispData()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << std << this;
    }
};

int main()
{
    Student s1(1, "Ram", 12), s2(2, "Shyam", 11), s3(3, "Jack", 10),s4,s5;

    s1.dispData();
    s2.dispData();
    s3.dispData();
    s4.dispData();
    s5.dispData();
    
    return 0;
}