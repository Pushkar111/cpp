/*
    let array = {-1, 4, 7, 2}

    All SubArrays
    // -1           → -1
    // -1, 4        → 3
    // -1, 4, 7     → 10 
    // -1, 4, 7, 2  → 12
    
    // 4            → 4 
    // 4, 7         → 11
    // 4, 7, 2      → 13 ===> Max Sum   

    // 7            → 7
    // 7, 2         → 9

    // 2            → 2
*/
#include <bits/stdc++.h>
using namespace std;
#define SIZE 4
/* (1) Basic Method */

/*
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

    int maxSum = INT_MIN;
    cout << "\nEach SubArray Sum \n";
    cout << "-------------------------------------------------------------------\n";
    for (int i = 0; i < SIZE; i++)
    {
        sum = 0;
        for (int j = i; j < SIZE; j++)
        {
            sum += a[j];
            cout << sum << "\t";
        }
        maxSum = max(maxSum, sum);
    }

    cout << "\nMax Sum : " << maxSum;

    return 0;
}
*/

/* (2) Kadane's Algorithm */
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

    sum = 0;
    int currentSum = 0;
    int maxSum = INT_MIN;
    cout << "\nEach SubArray Sum \n";
    cout << "-------------------------------------------------------------------\n";
    for (int i = 0; i < SIZE; i++)
    {   
        sum = 0;
        currentSum += a[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
        for (int j = i; j < SIZE; j++)
        {
            sum += a[j];
            cout << sum << "\t";
        }
    }

    cout << "\nMax Sum : " << maxSum;

    return 0;
}