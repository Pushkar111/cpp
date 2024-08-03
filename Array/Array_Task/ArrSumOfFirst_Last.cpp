/*
    Task = Sum of first and last element entered array
*/
#include <iostream>
using namespace std;
#define SIZE 5

int main()
{
    int a[SIZE];
    int i, no, temp, fDigit = 0, lDigit = 0, sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "\nThe array is\n";
    cout << "-----------------------------------------------------\n";
    for (i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    for (i = 0; i < SIZE; i++)
    {
        no = a[i];
        sum = 0;
        lDigit = no % 10;
        while (no > 9)
        {
            no /= 10;
        }
        fDigit = no;
        sum = fDigit + lDigit;
        a[i] = sum;
    }
    cout << "\nAfter sum\n";
    cout << "-------------------------------\n";
    for (i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}