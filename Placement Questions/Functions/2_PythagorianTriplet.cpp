/*
    Task => Check Pythagorean Triplet
                    a^2 + b^2 = c^2.
*/

#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a, b, c;

    a = max(x, max(y, z));

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y, z;

    // 12  5  13
    cout << "\nEnter the Three Angles Value : ";
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "It's Pythagorean triplet";
    }
    else
    {
        cout << "It's not Pythagorean triplet";
    }

    return 0;
}