/*
    Task => Octal to decimal

    Example -> 1      5      3     4
              8^3    8^2    8^1    8^0
              512     64     8      1

            -> (512*1) + (64*5) + (8*3) + (1*4)
              = 512 + 320 + 24 + 4
              = 860
*/

#include <iostream>
using namespace std;

int OctalToDecimal(int no)
{
    int ans = 0, weight = 1, temp;

    while (no > 0)
    {
        temp = no % 10;
        ans += temp * weight;
        weight *= 8;
        no /= 10;
    }

    return ans;
}

int main()
{
    int no, ans;

    cout << "\nEnter Octal to decimal : ";
    cin >> no;

    ans = OctalToDecimal(no);

    cout << no << " octal to decimal : " << ans;

    return 0;
}