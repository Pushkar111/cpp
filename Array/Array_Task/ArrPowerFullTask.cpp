/*
    Task = Sum of between first and last element entered array
           and those elements have one or two digit interchange
           those digits into next 3rd occurance unique prime.
*/

#include <iostream>
using namespace std;
#include <dos.h>

int main()
{
    int a[] = {2, 3, 123, 456, 2};
    int i, j, flag = 1, l, m, no, dup, temp, sum = 0, k;

    for (i = 0; i < 5; i++)
    {
        no = a[i];

        if (no > 99)
        {
            sum = 0;
            dup = no;
            dup = dup / 10;
            while (dup > 9)
            {
                temp = dup % 10;
                sum = sum + temp;
                dup = dup / 10;
            }
            a[i] = sum;
            // i++;
        }
        else
        {
            no = a[i];
            no++;
            cout << "\nA[" << i << "] : " << a[i];
            for (j = 3; j >= 1;)
            {
                flag = 1;

                for (k = 2; k < no; k++)
                {
                    if (no % k == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    cout << "--" << no;
                    if (j == 1)
                    {
                        a[i] = no;
                    }
                    j--;
                }
                no++;
            }
            // i++;
            cout << "\n";
        }
    }

    for (i = 0; i < 5; i++)
    {
        cout << "\n---A[" << i << "] : " << a[i];
    }

    return 0;
}