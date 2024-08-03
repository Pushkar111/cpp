#include <iostream>
using namespace std;
#include <stdlib.h>
#include <conio.h>
#define ROW 3
#define COL 3

int main()
{
    int a[ROW][COL], b[ROW][COL], c[ROW][COL];
    int i, j, k;
    int choice;

    // For Scan Matrix A
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << "\nEnter the Value of a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }

    // For Scan Matrix B
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << "\nEnter the Value of b[" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
    }

    // For Print the Matrix A
    cout << "\nThis is the Matrix A\n";
    cout << "-----------------------\n";
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    // For Print the Matrix B
    cout << "\nThis is the Matrix B\n";
    cout << "-----------------------\n";
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }

    while (1)
    {
        cout << "\n\t\t\t\t2D Calculator";
        cout << "\n-----------------------------------------------------------------------------";
        cout << "\n1.Addition";
        cout << "\n2.Subtraction";
        cout << "\n3.Multiplication";
        cout << "\n4.Exit";

        cout << "\nEnter the Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }

            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    cout << c[i][j] << "\t";
                }
                cout << "\n";
            }
            break;

        case 2:
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }

            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    cout << c[i][j] << "\t";
                }
                cout << "\n";
            }
            break;

        case 3:
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    for (k = 0; k < COL; k++)
                    {
                        c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                    }
                }
            }

            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    cout << c[i][j] << "\t";
                }
                cout << "\n";
            }
            break;

        case 4:
            exit(0);
        }
        getch();
    }
    return 0;
}