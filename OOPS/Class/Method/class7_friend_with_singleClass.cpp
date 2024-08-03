#include <iostream>
using namespace std;
#include <string.h>

class Calc
{
private:
    int no1, no2;

public:
    void setData(int no1, int no2)
    {
        this->no1 = no1;
        this->no2 = no2;
    }
    void dispData()
    {
        cout << "\nNo1 : " << no1 << "\tNo2 : " << no2;
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
    Calc c;

    c.setData(10, 20);
    c.dispData();

    swap(c);
    cout << "\nGlobal Function Swaping Called :";
    c.dispData();

    return 0;
}