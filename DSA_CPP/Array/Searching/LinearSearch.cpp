#include <bits/stdc++.h>
using namespace std;
#define SIZE 5

int LinearSearch(int a[], int key)
{
    int index = -1;

    for (int i = 0; i < SIZE; i++)
    {
        if (key == a[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int a[SIZE], key, index;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "\nEnter the key : ";
    cin >> key;

    index = LinearSearch(a, key);
    if (index == -1)
    {
        cout << "\n"
             << key << " key is not found";
    }
    else
    {
        cout << "\n"
             << key << " key is found at " << index << " index: ";
    }

    return 0;
}