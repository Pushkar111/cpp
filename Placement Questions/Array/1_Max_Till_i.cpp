/*
    Task 1 => Given an array a[] of SIZE n. For every i from 0 to SIZE-1 output max(a[0], a[1], a[2], ...., a[i]).
*/

#include <bits/stdc++.h>
using namespace std;
#define SIZE 5

int main()
{
    int a[SIZE], mx = -999999999;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    cout << "\nMaximum till i\n";
    cout << "--------------------------------------------------------\n";
    for (int i = 0; i < SIZE; i++)
    {
        mx = max(mx, a[i]);
        cout << mx << "\t";
    }

    return 0;
}