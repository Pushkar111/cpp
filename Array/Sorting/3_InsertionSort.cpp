/*
----------------------------------------------------------------
|                       Selection Sort                         |
----------------------------------------------------------------
=> insertion an element from unsorted array to its correct position in sorted array
*/
#include <bits/stdc++.h>
using namespace std;

void dispData(int a[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }
}

void insertionSort(int a[], int SIZE)
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
        dispData(a, SIZE); // for print each pass
    }
}

int main()
{
    int a[] = {12, 45, 23, 51, 19, 8};
    int SIZE = sizeof(a) / sizeof(int);

    cout << "\nBefore Insertion Sort Perform\n";
    cout << "------------------------------------------------------\n";
    dispData(a, SIZE);

    // insertion sort
    insertionSort(a, SIZE);
    cout << "\nAfter Insertion Sort Perform\n";
    cout << "------------------------------------------------------\n";
    dispData(a, SIZE);

    return 0;
}