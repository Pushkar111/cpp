// Binary (Global-By Friend) Operator Over Loading Function

#include <iostream>
using namespace std;

class Calc
{
private:
    int no1;

public:
    Calc(int no1)
    {
        this->no1 = no1;
    }
    void dispData()
    {
        cout << "\n"
             << this << "---No1 : " << no1;
    }
    friend Calc operator+(Calc &c1, Calc &c2);
};

Calc operator+(Calc &c1, Calc &c2)
{
    Calc temp(0);

    temp.no1 = c1.no1 + c2.no1;

    return temp;
}
int main()
{
    Calc c1(10), c2(20), c3(0);

    c1.dispData();
    c2.dispData();
    c3.dispData();

    c3 = c1 + c2;

    cout << "\nAfter Binary(Global-By Friend) operator Over loading function :";
    c3.dispData();

    return 0;
}