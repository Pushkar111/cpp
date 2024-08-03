/*
-----------------------------------------------------------------
|                   MultiLevel Inheritance                      |
-----------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void get_number(int);
    void put_number(void);
};

void Student::get_number(int a)
{
    roll_number = a;
}
void Student::put_number()
{
    cout << "Roll number: " << roll_number << endl;
}
class test : public Student // First level derivation
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
    void put_marks(void);
};
void test ::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test ::put_marks()
{
    cout << "Marks in SUB1 = " << sub1 << "\n";
    cout << "Marks in SUB2 = " << sub2 << "\n";
}
class Result : public test  // second level derivation
{
    float total;    // private by default

public:
    void disp(void);
};
void Result ::disp(void)
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total = " << total << endl;
}
int main()
{
    Result s1;  // student 1 created
    
    s1.get_number(111);
    s1.get_marks(75.0, 59.5);
    s1.disp();

    return 0;
}