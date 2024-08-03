#include <bits/stdc++.h>
using namespace std;

class Calc2;

class Calc1
{
    int no1;

public:
    void setData()
    {
        cout << "\nEnter No1: ";
        cin >> no1;
    }
    void dispData()
    {
        cout << "\nCalc1 No1: " << no1;
    }
    friend void swap(Calc1 &c1, Calc2 &c2);

};

class Calc2
{
    int no2;

public:
    void setData()
    {
        cout << "\nEnter No2: ";
        cin >> no2;
    }
    void dispData()
    {
        cout << "\nCalc1 No2: " << no2;
    }
    friend void swap(Calc1 &c1, Calc2 &c2);
};

void swap(Calc1 &c1, Calc2 &c2)
{
    int temp;
    temp = c1.no1;
    c1.no1 = c2.no2;
    c2.no2 = temp;
}

int main()
{
    Calc1 c1; 
    Calc2 c2;

    c1.setData();
    c2.setData();

    swap(c1, c2);

    cout << "\nAfter Swapping\n";
    cout << "---------------------\n";
    c1.dispData();
    c2.dispData(); 
}