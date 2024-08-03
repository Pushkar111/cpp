/*
----------------------------------------------------------------
|                       Selection Sort                         |
----------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;
#define SIZE 5

int a[SIZE];

void scanData()
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }
}

void dispData()
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }
}

void selectionSort()
{
    int i, j, min, temp;
    for (i = 0; i < SIZE - 1; i++)
    {
        min = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        cout << "\n\nPass: " << i + 1 << " => ";
        dispData(); // print array of each pass
    }
}

int main()
{
    scanData();

    cout << "\nBefore Selection Sort Perform\n";
    cout << "-----------------------------------------------------------------\n";
    dispData();

    // Selection Sort
    selectionSort();
    cout << "\nAfter Selection Sort Perform\n";
    cout << "-----------------------------------------------------------------\n";
    dispData();

    return 0;
}