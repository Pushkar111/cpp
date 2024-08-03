/*
----------------------------------------------------------------
|                       Selection Sort                         |
----------------------------------------------------------------
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

void selectionSort(int a[], int SIZE)
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
        dispData(a, SIZE); // print array of each pass
    }
}

int main()
{
    int a[] = {12, 45, 23, 51, 19, 8};
    int SIZE = sizeof(a) / sizeof(int);

    cout << "\nBefore Selection Sort Perform\n";
    cout << "-----------------------------------------------------------------\n";
    dispData(a, SIZE);

    // Selection Sort
    selectionSort(a, SIZE);
    cout << "\nAfter Selection Sort Perform\n";
    cout << "-----------------------------------------------------------------\n";
    dispData(a, SIZE);

    return 0;
}