/*
----------------------------------------------------------------
|                       Selection Sort                         |
----------------------------------------------------------------
=> Repeatedly swap two adjacent elements if they are in wrong order
=> (n-1) iterations before we get our sorted array
=> k^th iteration → (n-i)


Example :-
    Array -> {12, 45, 23, 51, 19, 8}

    (i)     𝟭𝟮, 𝟰𝟱, 23, 51, 19, 8
            12, 𝟒𝟓, 𝟐𝟑, 51, 19, 8
            12, 23, 𝟒𝟓, 𝟓𝟏, 19, 8
            12, 23, 45, 𝟓𝟏, 𝟏𝟗, 8
            12, 23, 45, 19, 𝟓𝟏, 𝟖
            12, 23, 45, 19, 8, 𝟝𝟙

    (ii)    𝟭𝟮, 𝟮𝟯, 45, 19, 8, 𝟝𝟙
            12, 𝟮𝟯, 𝟒𝟓, 19, 8, 𝟝𝟙
            12, 23, 𝟒𝟓, 𝟏𝟗, 8, 𝟝𝟙
            12, 23, 19, 𝟒𝟓, 𝟖, 𝟝𝟙
            12, 23, 19, 8, 𝟜𝟝, 𝟝𝟙

    (iii)   𝟭𝟮, 𝟮𝟯, 19, 8, 𝟜𝟝, 𝟝𝟙
            12, 𝟮𝟯, 𝟏𝟗, 8, 𝟜𝟝, 𝟝𝟙
            12, 19, 𝟮𝟯, 𝟖, 𝟜𝟝, 𝟝𝟙
            12, 19, 8, 𝟚𝟛, 𝟜𝟝, 𝟝𝟙

    (iv)    𝟭𝟮, 𝟏𝟗, 8, 𝟚𝟛, 𝟜𝟝, 𝟝𝟙
            12, 𝟏𝟗, 𝟖, 𝟚𝟛, 𝟜𝟝, 𝟝𝟙
            12, 8, 𝟙𝟡, 𝟚𝟛, 𝟜𝟝, 𝟝𝟙

    (v)     𝟭𝟮, 𝟖, 𝟙𝟡, 𝟚𝟛, 𝟜𝟝, 𝟝𝟙
            𝟠, 𝟙𝟚, 𝟙𝟡, 𝟚𝟛, 𝟜𝟝, 𝟝𝟙 → Sorted Array

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

void bubbleSort()
{
    int i, j, temp;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (a[j] > a[j + 1]) // For Ascending Order
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cout << "\n\nPass: " << i + 1 << " => ";
        dispData(); // print the array after each pass
    }
}

int main()
{
    scanData();
    cout << "\nBefore Bubble Sort Perform\n";
    cout << "----------------------------------------------------------\n";
    dispData();

    // Bubble Sort
    bubbleSort();
    cout << "\nAfter Bubble Sort Perform\n";
    cout << "----------------------------------------------------------\n";
    dispData();

    return 0;
}