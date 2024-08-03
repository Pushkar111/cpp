/*
    Task => Decimal to octal

    Example => 8 | 1000
               8 | 125   - 0
               8 | 15    - 5
               8 | 1     - 7

            = 1750
*/

#include <bits/stdc++.h>
using namespace std;

int DecimalToOctal(int no)
{
    int ans = 0, weight = 1, temp;

    while (weight <= no)
    {
        weight *= 8;
    }
    weight /= 8;

    while (weight > 0)
    {
        temp = no / weight;
        no -= weight * temp;
        ans = (ans * 10) + temp;
        weight /= 8;
    }

    return ans;
}

int main()
{
    int no, ans;

    cout << "\nEnter Decimal to Octal : ";
    cin >> no;

    ans = DecimalToOctal(no);

    cout << no << " Decimal to octal : " << ans;

    return 0;
}