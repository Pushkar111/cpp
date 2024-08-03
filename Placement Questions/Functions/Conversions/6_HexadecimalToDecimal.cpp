/*
    Task => Hexadecimal to decimal

 Example(1) -> 1      5      3     4
              16^3   16^2   16^1  16^0
              4096    256     16    1

            -> (4096*1) + (256*5) + (16*3) + (1*4)
              = 4096 + 1280 + 48 + 4
              = 5428
 
 Example(2) -> 1     A     C
             16^2   16^1  16^0
              256    16    1                      

            -> (256*1) + (16*10) + (1*12)
              = 256 + 160 + 12
              = 428
 
*/

#include <bits/stdc++.h>
using namespace std;

int HexadecimalToDecimal(char str[])
{
    int ans = 0, temp, weight = 1, len = 0;

    len = strlen(str);

    for (int i = (len - 1); i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            ans += weight * (str[i] - '0');
        }
        else if (str[i] >= 'A' && str[i] <= 'F'){
            ans += weight * (str[i] - 'A' + 10);
        }
        weight *= 16;
    }

    return ans;
}

int main()
{
    int ans;
    char n[100];

    cout << "\nEnter hexadecimal to decimal : ";
    cin >> n;

    ans = HexadecimalToDecimal(n);

    cout << n << " Hexadecimal to Decimal : " << ans;

    return 0;
}