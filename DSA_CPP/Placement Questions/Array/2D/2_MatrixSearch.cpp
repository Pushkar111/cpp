/*
    👨 Task =>
    Given a n * m matrix
    Write a algorithm to find that the given value exists in the matrix or not.
    Integers in each rows are sorted in ascending order from left to right.
    Integers in each column are sorted in ascending order from top to bottom.

    👨 Example =>

    ---------------------------------
    |   1   |   4   |   7   |   11  |
    ---------------------------------
    |   2   |   5   |   8   |   12  |
    ---------------------------------
    |   3   |   6   |   9   |   16  |
    ---------------------------------
    |   10  |   13  |   14  |   17  |
    ---------------------------------

    Given target = 5, return true
    Given target = 20, return false

*/

#include <bits/stdc++.h>
using namespace std;
#define ROW 4
#define COL 4

int main()
{
    int a[ROW][COL];
    int target, flag = 1;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "\nEnter the value of the a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }

    cout << "\nMatrix A\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nEnter the target : ";
    cin >> target;

    int r = 0;
    int c = COL - 1;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            flag = 1;
            if (a[r][c] == target)
            {
                flag = 0;
            }
            else if (target < a[r][c])
            {
                c--;
            }
            else
            {
                r++;
            }
        }
    }
    if (flag == 0)
    {
        cout << target << " is found";
    }
    else
    {
        cout << target << " is not found";
    }

    return 0;
}