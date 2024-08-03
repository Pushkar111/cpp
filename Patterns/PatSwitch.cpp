#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
#define SIZE 5

int main()
{
    int i, j, k, SIZE = 5;
    int no, flag = 1;
    int l = 2, m, odd = 1, even = 2;
    int choice;
    while (1)
    {
        cout << "\n----------------------------------------------------------------------";
        cout << "\n                                 Pattern";
        cout << "\n----------------------------------------------------------------------";
        cout << "\n1.Square Pattern";
        cout << "\n2.Right Half Pyramid";
        cout << "\n3.Left Half Pyramid";
        cout << "\n4.Inverted Right Half pyramid";
        cout << "\n5.Inverted Left Half Pyramid";
        cout << "\n6.Full Pyramid";
        cout << "\n7.Full Inverted Pyramid";
        cout << "\n8.Diamond Pattern";
        cout << "\n9.Hourglass Pattern";
        cout << "\n10.Rhombus Pattern";
        cout << "\n11.Hollow Square Patterm";
        cout << "\n12.Hollow Rhopmbus Pattern";
        cout << "\n13.Hollow Full Pyramid";
        cout << "\n14.Odd-Even Numbers";
        cout << "\n15.Unique Prime Diamond";
        cout << "\n16.Unique Odd Diamond";
        cout << "\n17.Unique Even Diamond";
        cout << "\n18.Right Half DIamond Pattern";
        cout << "\n19.Left Half Diamond Pattern";
        cout << "\n20. Palindrome Pattern";
        cout << "\n21. Zig-zag Pattern";
        cout << "\n22.Exit";
        cout << "\n----------------------------------------------------------------------";

        cout << "\n\nEnter the Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (i = 1; i <= SIZE; i++)
            {
                for (j = 1; j <= SIZE; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 2:
            for (i = 1; i <= SIZE; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 3:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }
                for (j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }
            break;

        case 4:
            for (i = SIZE; i >= 1; i--)
            {
                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 5:
            for (i = SIZE; i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }
            break;

        case 6:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 7:
            for (i = SIZE; i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 8:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }

            for (i = (SIZE - 1); i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 9:
            for (i = SIZE; i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }

            for (i = 2; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 10:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= SIZE; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;

        case 11:
            for (i = 1; i <= SIZE; i++)
            {

                for (j = 1; j <= SIZE; j++)
                {
                    if (i > 1 && i < SIZE && j > 1 && j < SIZE)
                    {
                        cout << "  ";
                    }
                    else
                    {
                        cout << "* ";
                    }
                }
                cout << "\n";
            }
            break;

        case 12:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= SIZE; j++)
                {
                    if (i > 1 && i < SIZE && j > 1 && j < SIZE)
                    {
                        cout << "  ";
                    }
                    else
                    {
                        cout << "* ";
                    }
                }
                cout << "\n";
            }
            break;

        case 13:
            for (i = 0; i < 5; i++)
            {
                for (k = 0; k <= 2 * (5 - i) - 1; k++)
                {
                    cout << " ";
                }

                for (j = 0; j < 2 * i + 1; j++)
                {

                    if (j == 0 || j == 2 * i || i == (5 - 1))
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << "\n";
            }
            break;

        case 14:
            for (i = 1; i <= SIZE; i++)
            {
                if (i % 2 == 0)
                {
                    for (j = 1; j <= i; j++)
                    {
                        cout << j * 2 << " ";
                        ;
                    }
                }
                else
                {
                    for (j = 1; j <= i; j++)
                    {
                        cout << (j * 2) - 1 << " ";
                    }
                }
                cout << "\n";
            }
            break;
        case 15:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i;)
                {
                    no = l;
                    flag = 1;
                    for (m = 2; m < no; m++)
                    {
                        if (no % m == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag)
                    {
                        cout << no << " ";
                        j++;
                    }
                    l++;
                }
                cout << "\n";
            }

            for (i = 4; i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i;)
                {
                    no = l;
                    flag = 1;
                    for (m = 2; m < no; m++)
                    {
                        if (no % m == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag)
                    {
                        cout << no << " ";
                        j++;
                    }
                    l++;
                }
                cout << "\n";
            }
            break;

        case 16:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i;)
                {
                    no = odd;
                    flag = 1;
                    for (m = 1; m < no; m++)
                    {
                        if (no % 2 == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag)
                    {
                        cout << no << " ";
                        j++;
                    }
                    odd++;
                }
                cout << "\n";
            }

            for (i = 4; i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i;)
                {
                    no = odd;
                    flag = 1;
                    for (m = 1; m < no; m++)
                    {
                        if (no % 2 == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag)
                    {
                        cout << no << " ";
                        j++;
                    }
                    odd++;
                }
                cout << "\n";
            }
            break;

        case 17:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i;)
                {
                    no = even;
                    flag = 1;
                    for (m = 1; m < no; m++)
                    {
                        if (no % 2 != 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag)
                    {
                        cout << no << " ";
                        j++;
                    }
                    even++;
                }
                cout << "\n";
            }

            for (i = 4; i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i;)
                {
                    no = even;
                    flag = 1;
                    for (m = 1; m < no; m++)
                    {
                        if (no % 2 == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag)
                    {
                        cout << no << " ";
                        j++;
                    }
                    even++;
                }
                cout << "\n";
            }
            break;

        case 18:
            for (i = 1; i <= SIZE; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }
            for (i = SIZE - 1; i >= 1; i--)
            {
                for (j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }
            break;

        case 19:
            for (i = 1; i <= SIZE; i++)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }
                for (j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }

            for (i = SIZE - 1; i >= 1; i--)
            {
                for (k = (SIZE - i); k >= 1; k--)
                {
                    cout << " ";
                }

                for (j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }
            break;

        case 20:
            for (i = 1; i <= SIZE; i++)
            {
                int k = i;
                for (j = 1; j <= (SIZE - i); j++)
                {
                    cout << "  ";
                }
                for (; j <= SIZE; j++)
                {
                    cout << k << " ";
                    k--;
                }
                k = 1;
                for (; j < (SIZE + i); j++)
                {
                    k++;
                    cout << k << " ";
                }

                for (; j <= (2 * SIZE - 1); j++)
                {
                    cout << " ";
                }
                cout << endl;
            }
            break;

        case 21:
            for (i = 1; i <= 3; i++)
            {
                for (j = 1; j <= 10; j++)
                {
                    if (((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0)))
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;

        case 22:
            exit(0);
        }

        getch();
    }
    return 0;
}
