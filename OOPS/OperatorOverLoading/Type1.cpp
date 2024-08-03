// Unary (Member) Operator Over Loading Function

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

    // Unary (Member) Operator Over Loading Function
    void operator-()
    {
        no1 = -no1;
    }

    void dispData()
    {
        cout << "\n"
             << this << "---No1 : " << no1;
    }
};

int main()
{
    Calc c;

    c.dispData();

    -c;

    cout << "\nAfter Unary Operator Over Loading Function called : ";
    c.dispData();

    return 0;
}