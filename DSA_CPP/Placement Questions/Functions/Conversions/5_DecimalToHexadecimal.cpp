/*
    Task => Decimal to hexadecimal

    Example(1) => 16 | 5428
                  16 | 339   - 4
                  16 | 21    - 3
                  16 | 1     - 5

                = 1534

    Example(2) => 16 | 428
                  16 | 26   - 12
                  16 | 1    - 10

                = 1AC
*/

#include <bits/stdc++.h>
using namespace std;

string DecimalToHexadecimal(int no)
{
    int temp, weight = 1;
    string ans = "";

    while (weight <= no)
    {
        weight *= 16;
    }
    weight /= 16;

    while (weight > 0)
    {
        temp = no / weight;
        no -= weight * temp;
        weight /= 16;
        if (temp <= 9)
        {
            ans = ans + to_string(temp);
        }
        else
        {
            char c = 'A' + temp - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main()
{
    int n;
    string ans;

    cout << "\nEnter Decimal to hexadecimal : ";
    cin >> n;

    ans = DecimalToHexadecimal(n);

    cout << n << " Decimal to hexadecimal : " << ans;

    return 0;
}