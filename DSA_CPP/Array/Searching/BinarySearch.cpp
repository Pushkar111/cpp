/*
----------------------------------------------------------------
|               Time Complexity of binary Search               |
----------------------------------------------------------------
-> After first iteration length of the array → n
-> After second iteration length of the array → n/2
-> After third iteration length of the array → (n/2)/2 = n/2^2
-> After k iteration length of the array → n/2^k
*/
#include <bits/stdc++.h>
using namespace std;
#define SIZE 5

int BinarySearch(int a[], int key)
{
    int index = -1;
    int min = 0, max = SIZE - 1, mid;

    while (min <= max)
    {
        mid = (min + max) / 2;
        if (a[mid] == key)
        {
            index = mid;
            break;
        }
        else if (key > a[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    return index;
}

int main()
{
    int a[SIZE], key;
    int index;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "\nEnter the key : ";
    cin >> key;

    index = BinarySearch(a, key);
    if (index == -1)
    {
        cout << "\n" << key << " is not found";
    }
    else
    {
        cout << "\n" << key << " key is found at " << index << " index";
    }
    return 0;
}