/*
    👨 Task => Given an array a[] of SIZE n. Output sum of each SubArray of the given array

    Example =>
        -------------------------
        |   1   |   2   |   2   |
        -------------------------
           (0)     (1)     (2)

        SubArray : Total 6 SubArrays
                   Bcz -> here, SIZE n = 3,
                          and, formula n*(n+1)/2 = 3*(3+1)/2 = 6

            ---------   -----------------   -------------------------   ---------   -----------------   ---------
            |   1   |   |   1   |   2   |   |   1   |   2   |   2   |   |   2   |   |   2   |   2   |   |   2   |
            ---------   -----------------   -------------------------   ---------   -----------------   ---------

        Each SubArray sum :
            ---------   -----------------   -------------------------   ---------   -----------------   ---------
            |   1   |   |   1   |   2   |   |   1   |   2   |   2   |   |   2   |   |   2   |   2   |   |   2   |
            ---------   -----------------   -------------------------   ---------   -----------------   ---------
               1️⃣              3️⃣                     5️⃣                  2️⃣             4️⃣              2️⃣
*/
#include <bits/stdc++.h>
using namespace std;
#define SIZE 3

int main()
{
    int a[SIZE];
    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "\nOriginal Array is\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    cout << "\nAll Possible SubArrays:\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = i; j < SIZE; ++j)
        {
            cout << "[";
            for (int k = i; k <= j; ++k)
            {
                cout << a[k];
                if (k < j)
                {
                    cout << ", ";
                }
            }
            cout << "]\n";
        }
    }

    cout << "\nEach SubArray Sum \n";
    cout << "--------------------------------\n";
    for (int i = 0; i < SIZE; i++)
    {
        sum = 0;
        for (int j = i; j < SIZE; j++)
        {
            sum += a[j];
            cout << sum << "\t";
        }
    }

    return 0;
}