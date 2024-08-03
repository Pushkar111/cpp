/*
    Task = Sum of between first and last element entered array
*/
#include <iostream>
using namespace std;
#define SIZE 5

int main()
{
    int a[SIZE];
    int i, no, sum = 0, temp;

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
        no /= 10;
        sum = 0;
        while (no > 9)
        {
            temp = no % 10;
            sum += temp;
            no /= 10;
        }
        a[i] = sum;
    }
    cout << "\nSum of array between 1st and last digit\n";
    cout << "-----------------------------------------------------\n";
    for (i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}