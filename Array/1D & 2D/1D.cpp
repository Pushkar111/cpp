#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#define SIZE 5

int main()
{
    int i, j, k, choice, temp;
    int a[SIZE], b[SIZE], c[SIZE];
    int Int[SIZE];
    char Char[SIZE];
    int IntKey;
    char CharKey;
    int min = 0, mid, max = SIZE - 1, index = -1;

    while (1)
    {
        cout << "\n                                     1D Array";
        cout << "\n--------------------------------------------------------------------------------";
        cout << "\n1.Sorting";
        cout << "\n2.Linear Search";
        cout << "\n3.Binary Search";
        cout << "\n4.1D Calc";
        cout << "\n5.exit";
        cout << "\n--------------------------------------------------------------------------------";

        cout << "\nEnter the choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout<<"\n1.Int";
            cout<<"\n2.Char";
            cout<<"\n3.exit";

            cout<<"\nEnter the Choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of Int["<<i<<"] : ";
                    cin>>Int[i];
                }

                cout<<"\nThe Unsorted Array is\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Int[i]<<"\t";
                }

                for (i = 0; i < SIZE; i++)
                {
                    for (j = 0; j < SIZE - 1; j++)
                    {
                        if (Int[j] > Int[j + 1])
                        {
                            temp = Int[j];
                            Int[j] = Int[j + 1];
                            Int[j + 1] = temp;
                        }
                    }
                }

                cout<<"\nThe Sorted Array is\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Int[i]<<"\t";
                }
                break;

            case 2:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of Char["<<i<<"] : ";
                    cin>>Char[i];
                }

                cout<<"\nThe Unsorted Array is\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Char[i]<<"\t";
                }

                for (i = 0; i < SIZE; i++)
                {
                    for (j = 0; j < SIZE - 1; j++)
                    {
                        if (Char[j] > Char[j + 1])
                        {
                            temp = Char[j];
                            Char[j] = Char[j + 1];
                            Char[j + 1] = temp;
                        }
                    }
                }

                cout<<"\nThe Sorted Array is\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Char[i]<< "\t";
                }
                break;

            case 3:
                exit(0);
            } // end of switch case 1 sorting
            break;

        case 2:
            cout<<"\n1.Int";
            cout<<"\n2.Char";
            cout<<"\n3.exit";

            cout<<"\nEnter the choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of int["<<i<<"] : ";
                    cin >> Int[i];
                }

                cout<<"\nThe Array You Follows\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Int[i]<<"\t";
                }

                cout<<"\nEnter the Int Key : ";
                cin >> IntKey;

                for (i = 0; i < SIZE; i++)
                {
                    if (IntKey == Int[i])
                    {
                        index = i;
                        break;
                    }
                }

                if (index == -1)
                {
                    cout<<"\n"<<IntKey<<" is not Found";
                }
                else
                {
                    cout<<"\n"<<IntKey<<" is found at "<<index<<" index and "<<index+1<<" place";
                }
                break;

            case 2:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of Char["<<i<<"] : ";
                    cin >> Char[i];
                }

                cout<<"\nThe Array You Follows\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Char[i]<<"\t";
                }

                cout<<"\nEnter the Char Key : ";
                cin >> CharKey;

                for (i = 0; i < SIZE; i++)
                {
                    if (CharKey == Char[i])
                    {
                        index = i;
                        break;
                    }
                }

                if (index == -1)
                {
                    cout<<"\n"<<CharKey<<" is not Found";
                }
                else
                {
                    cout<<"\n"<<CharKey<<" is found at "<<index<<" index and "<<index+1<<" place";
                }
                break;

            case 3:
                exit(0);
            } // end of switch case 2 LinSearch
            break;

        case 3:
            cout<<"\n1.Int";
            cout<<"\n2.Char";
            cout<<"\n3.exit\n";

            cout<<"\nEnter the choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout<<"\nPlz Enter the Sorted Array\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of Int["<<i<<"] : ";
                    cin >> Int[i];
                }

                cout<<"\nThe Array You Follows\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Int[i]<<"\t";
                }

                cout<<"\nEnter the Int Key : ";
                cin >> IntKey;

                while (min <= max)
                {
                    mid = (min + max) / 2;
                    if (Int[mid] == IntKey)
                    {
                        index = mid;
                        break;
                    }
                    else if (IntKey > Int[mid])
                    {
                        min = mid + 1;
                    }
                    else
                    {
                        max = mid - 1;
                    }
                }

                if (index == -1)
                {
                    cout<<"\n"<<IntKey<<" is not found";
                }
                else
                {
                    cout<<"\n"<<IntKey<<" is found at "<<index<<" index and "<<index+1<<" place";
                }
                break;

            case 2:
                cout<<"\nPlz Enter the Sorted Array\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of Char["<<i<<"] : ";
                    cin >> Char[i];
                }

                cout<<"\nThe Array You Follows\n";
                for (i = 0; i < SIZE; i++)
                {
                    cout<<Char[i]<<"\t";
                }

                cout<<"\nEnter the Char Key : ";
                cin >> CharKey;

                while (min <= max)
                {
                    mid = (min + max) / 2;
                    if (Char[mid] == CharKey)
                    {
                        index = mid;
                        break;
                    }
                    else if (CharKey > Char[mid])
                    {
                        min = mid + 1;
                    }
                    else
                    {
                        max = mid - 1;
                    }
                }

                if (index == -1)
                {
                    cout<<"\n"<<CharKey<<" is not found";
                }
                else
                {
                    cout<<"\n"<<CharKey<<" is found at "<<index<<" index and "<<index+1<<" place";
                }
                break;

            case 3:
                exit(0);
            } // end of switch case 3 BinSearch
            break;

        case 4:
            cout<<"\n1.Addition";
            cout<<"\n2.Substraction";
            cout<<"\n3.Multiplication";
            cout<<"\n4.Division";
            cout<<"\n5.exit";

            cout<<"\nEnter the Choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of a["<<i<<"] : ";
                    cin >> a[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of b["<<i<<"] : ";
                    cin >> b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    c[i] = a[i] + b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\n"<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<"";
                }
                break;

            case 2:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of a["<<i<<"] : ";
                    cin >> a[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of b["<<i<<"] : ";
                    cin >> b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    c[i] = a[i] - b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\n"<<a[i]<<" - "<<b[i]<<" = "<<c[i]<<"";
                }
                break;

            case 3:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of a["<<i<<"] : ";
                    cin >> a[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of b["<<i<<"] : ";
                    cin >> b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    c[i] = a[i] * b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\n"<<a[i]<<" * "<<b[i]<<" = "<<c[i]<<"";
                }
                break;

            case 4:
                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of a["<<i<<"] : ";
                    cin >> a[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\nEnter the value of b["<<i<<"] : ";
                    cin >> b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    c[i] = a[i] / b[i];
                }

                for (i = 0; i < SIZE; i++)
                {
                    cout<<"\n"<<a[i]<<" / "<<b[i]<<" = "<<c[i]<<"";
                }
                break;

            case 5:
                exit(0);
            }
            break;

        case 5:
            exit(0);
        }
        getch();
    }
        return 0;
}