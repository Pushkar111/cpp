#include <iostream>
using namespace std;
#include <string.h>

class Student
{
private:
    int rno;
    char name[100];
    int std;

public:
    Student();
    Student(int rno, char name[], int std);
    Student(Student &s);
    void dispData();
};

// Default constructor
Student::Student()
{
    cout << "\nSTART :: Default Constructor---" << this;
    rno = 1;
    strcpy(this->name, "Rahul");
    std = 12;
    cout << "\nEND :: Default Constructor";
}

// Parameterized constructor
Student::Student(int rno, char name[], int std)
{
    cout << "\nSTART :: Parameterised Constructor---" << this;
    this->rno = rno;
    strcpy(this->name, name);
    this->std = std;
    cout << "\END :: Parameterised Constructor";
}

// Copy constructor
Student::Student(Student &s)
{
    cout << "\nSTART :: Copy Constructor---" << this;
    this->rno = s.rno;
    strcpy(this->name, s.name);
    this->std = s.std;
    cout << "\nEND :: Copy Constructor";
}

void Student::dispData()
{
    cout << "\n" << rno << "\t" << name << "\t" << std << this;
}

int main()
{
    Student s1;

    s1.dispData();

    Student s2(s1);

    s2.dispData();
    return 0;
}