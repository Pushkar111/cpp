#include <iostream>
using namespace std;
#define SIZE 5

int main()
{
    int a[SIZE], i;
    int sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "\nThe Array is\n";
    cout << "----------------------------------------------------\n";
    for (i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    for (i = 0; i < SIZE; i++)
    {
        sum += a[i];
    }

    cout << "\nSum = " << sum;

    return 0;
}