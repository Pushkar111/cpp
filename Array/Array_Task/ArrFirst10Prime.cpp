/*
    Task :- Print First 10 Prime without entered by user and console
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int count = 0, no = 2, flag = 1, i;
    int a[10];

    while (count < 10)
    {
        flag = 1;
        for (i = 2; i <= no / 2; i++)
        {
            if (no % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            a[count] = no;
            count++;
        }
        no++;
    }

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }

    getch();
    return 0;
}