/*
    Task => Binary to Decimal
         -> Binary -> Base - 2
         -> Decimal -> Base - 10

    Example -> 1      0      0     1
              2^3    2^2    2^1    2^0
               8      4      2      1

            -> (8*1) + (4*0) + (2*0) + (1*1)
              = 9
*/

#include <iostream>
using namespace std;

int BinaryToDecimal(int no)
{
    int ans = 0, weight = 1, temp; // ans = decimal;

    while (no > 0)
    {
        temp = no % 10;
        ans += temp * weight;
        weight *= 2;
        no /= 10;
    }

    return ans;
}

int main()
{
    int no, ans;

    cout << "\nEnter the No for Convert to Decimal : ";
    cin >> no;

    ans = BinaryToDecimal(no);

    cout << no << " to Decimal : " << ans;
    return 0;
}
