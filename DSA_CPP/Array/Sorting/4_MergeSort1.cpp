#include <iostream>
using namespace std;
#define S1 5
#define S2 5
#define S3 S1 + S2

void dispData(int c[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << c[i] << "\t";
    }
}

void mergeSort(int a[], int b[], int c[])
{
    int i = 0, j = 0, k = 0;

    while (i < S1 && j < S2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < S1)
    {
        c[k++] = a[i++];
    }

    while (j < S2)
    {
        c[k++] = b[j++];
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 1, 2, 3, 4, 5};
    int c[S3];

    int min = 0, mid, max = S3;
    mid = (min + max) / 2;

    int a[mid];
    int b[S3 - mid];

    for (int i = 0; i < mid; i++)
    {
        a[i] = arr[i];
    }

    for (int i = mid; i < max; i++)
    {
        b[i - mid] = arr[i];
    }

    cout << "\nFirst Array: ";
    cout << "\n-----------------------------------------------------------\n";
    dispData(a, S1);

    cout << "\nSecond Array: ";
    cout << "\n-----------------------------------------------------------\n";
    dispData(b, S2);

    // mergeSort-1
    mergeSort(a, b, c);
    cout << "\nSorted Array: ";
    cout << "\n-----------------------------------------------------------\n";
    dispData(c, S3);

    return 0;
}
