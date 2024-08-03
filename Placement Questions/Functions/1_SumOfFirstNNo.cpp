/*
    Task => Sum of First N Numbers
    (1) Using For Loop
    (2) Using the Formula
        Sn = n*(n+1)/2
*/

#include <iostream>
using namespace std;

int sum(int no)
{
    int i, sum = 0;

    // (1) Using For Loop
    /*
    for (i = 1; i <= no; i++)
    {
        sum += i;
    }
    */

    // (2) Using Formula
    sum = no * (no + 1) / 2;

    return sum;
}

int main()
{
    int i, ans;
    int n;

    cout << "\nEnter the N Value to Print Sum of First N Numbers : ";
    cin >> n;

    ans = sum(n);

    cout << ans << endl;

    return 0;
}