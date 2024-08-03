#include <iostream>
using namespace std;

void dispData(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
}

void merge(int arr[], int min, int mid, int max)
{
    int SIZE1 = mid - min + 1;
    int SIZE2 = max - mid;

    int a[SIZE1];
    int b[SIZE2];

    for (int i = 0; i < SIZE1; i++)
    {
        a[i] = arr[min + i];
    }

    for (int i = 0; i < SIZE2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = min;

    while (i < SIZE1 && j < SIZE2)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    while (i < SIZE1)
    {
        arr[k++] = a[i++];
    }
    while (j < SIZE2)
    {
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int min, int max)
{
    if (min < max)
    {
        int mid = (min + max) / 2;
        mergeSort(arr, min, mid);
        mergeSort(arr, mid + 1, max);
        merge(arr, min, mid, max);
    }
}

int main()
{
    int arr[] = {67, 52, 421, 523, 13, 522, 251, 132, 769};
    int SIZE = sizeof(arr) / sizeof(int);

    int min = 0, max = SIZE - 1;

    cout << "\nUnsorted Array: \n";
    cout << "---------------------------------------------------\n";
    dispData(arr, SIZE);

    mergeSort(arr, min, max);
    cout << "\nsorted Array: \n";
    cout << "---------------------------------------------------\n";
    dispData(arr, SIZE);
    return 0;
}