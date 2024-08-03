#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    int no;

    void display()
    {
        cout << "\nBase Class display :: no = " << no << endl;
    }
};

class Intermediate1 : virtual public Base
{
public:
    void increment()
    {
        no++;
    }
};

class Intermediate2 : virtual public Base
{
public:
    void decrement()
    {
        no--;
    }
};

class Derived : public Intermediate1, public Intermediate2
{
public:
    void multiply()
    {
        no *= 2;
    }
};

int main()
{
    Derived obj;

    obj.no = 5;
    obj.display();

    obj.increment();
    obj.display();

    obj.decrement();
    obj.display();
    
    obj.multiply();
    obj.display();
    return 0;
}