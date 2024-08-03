/*
    Task => Decimal to Binary
         -> Decimal -> Base - 10
         -> Binary -> Base - 2

    Example => 2 | 1000
               2 | 500  - 0
               2 | 250  - 0
               2 | 125  - 0 
               2 | 62   - 1
               2 | 31   - 0
               2 | 15   - 1
               2 | 7    - 1
               2 | 3    - 1
               2 | 1    - 1

            = 1111101000     
*/

#include <bits/stdc++.h>
using namespace std;

int DecimalToBinary(int no)
{
                // for float value
                // ↓
    int ans = 0, weight = 1, temp;

    while (weight <= no)
    {
        weight *= 2;
    }
    weight /= 2;

    while (weight > 0)
    {
        temp = no / weight;
        no -= temp * weight;
        ans = (ans * 10) + temp;
        weight /= 2;
    }

    return ans;
}

int main()
{
    int no, ans;

    cout << "\nEnter Decimal to binary : ";
    cin >> no;

    ans = DecimalToBinary(no);

    cout << no << " Decimal to binary : " << ans;

    return 0;
}