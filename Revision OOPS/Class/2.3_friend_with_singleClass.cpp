#include <bits/stdc++.h>
using namespace std;

class Calc
{
    int no1, no2;

public:
    void setData(int no1, int no2)
    {
        this->no1 = no1;
        this->no2 = no2;
    }

    void dispData()
    {
        cout << "\nno1: " << no1 << "\tno2: " << no2;
    }

    friend void swap(Calc &c);
};

void swap(Calc &c)
{
    int temp;
    temp = c.no1;
    c.no1 = c.no2;
    c.no2 = temp;
}

int main()
{
    Calc c1;
    int no1, no2;
    no1 = 10;
    no2 = 20;
    c1.setData(no1, no2);
    c1.dispData();

    swap(c1);
    cout << "\nAfter Swapping\n";
    cout << "----------------------------------------------------------------";
    c1.dispData();

    return 0;
}