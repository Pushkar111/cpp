/*
----------------------------------------------------------------
|                       Selection Sort                         |
----------------------------------------------------------------
=> insertion an element from unsorted array to its correct position in sorted array
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

void insertionSort()
{
    int i, j, temp;
    for (i = 1; i < SIZE; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > temp)
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j + 1] = temp;
        cout << "\n\nPass: " << i << " => ";
        dispData(); // for print each pass
    }
}

int main()
{
    scanData();

    cout << "\nBefore Insertion Sort Perform\n";
    cout << "------------------------------------------------------\n";
    dispData();

    // insertion sort
    insertionSort();
    cout << "\nAfter Insertion Sort Perform\n";
    cout << "------------------------------------------------------\n";
    dispData();

    return 0;
}