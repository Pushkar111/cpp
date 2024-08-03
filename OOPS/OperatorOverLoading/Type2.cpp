// Unary (Global By Friend) Operator Over Loading Function

#include <iostream>
using namespace std;

class Calc
{
private:
    int no1;

public:
    Calc()
    {
        no1 = 10;
    }

    void dispData()
    {
        cout << "\n"
             << this << "---No1 : " << no1;
    }

    friend void operator-(Calc &test);
};

void operator -(Calc &test)
{
    test.no1 = -test.no1;
}

int main()
{
    Calc c;

    c.dispData();

    -c;

    cout << "\nAfter Unary (Global by friend) Operator Over Loading Function called : ";
    c.dispData();

    return 0;
}