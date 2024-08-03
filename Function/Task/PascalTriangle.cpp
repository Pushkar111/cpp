/*
    Task =>             1
                      1   1
                    1   2   1
                  1   3   3   1
                1   4   6   4   1
              1   5   10  10  5   1
*/

#include <iostream>
using namespace std;

int fact(int no)
{
    int i, fact = 1;

    for (i = 1; i <= no; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int i, j, n, ans, k;

    cout << "\nEnter the Rows to Print a Pettern : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for ( k = (n-i); k >= 1; k--)
        {
            cout << " ";
        }
        
        for (j = 0; j <= i; j++)
        {
            ans = fact(i) / (fact(j) * fact(i - j));
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}