/*
-----------------------------------------------------------------------------------------------------
|                                           Method Overloading Problem                              |
-----------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

class Calc
{
public:
    int add(int x, int y)
    {
        return x + y;
    }
    int sub(int x, int y, int z)
    {
        return x - y - z;
    }
    int mul(int x, int y, int z, int w)
    {
        return x * y * z * w;
    }
    int div(int x, int y)
    {
        return x / y;
    }
};

int main()
{

    Calc c;
    cout << "\nAddition = " << c.add(5, 5) << endl;
    cout << "\nSubtraction = " << c.sub(5, 5, 5) << endl;
    cout << "\nMultiplication = " << c.mul(5, 5, 5, 5) << endl;
    cout << "\nDivision = " << c.div(5, 5) << endl;

    return 0;
}