/*
    👨 Task => Given a square matrix A and its number of rows (or columns) N, return the transpose of A.
    The transpose of a matrix is the matrix flipped over its main diagonal, switching the row and column indices of the matrix
    
    👨 Constrains =>

    1 <= N <= 1000

    👨 Example =>
    Transpose of N*N  Matrix
    -------------------------           -------------------------
    |   1   |   2   |   3   |           |   1   |   4   |   7   |
    -------------------------           -------------------------
    |   4   |   5   |   6   |     →     |   2   |   5   |   8   |
    -------------------------           -------------------------
    |   7   |   8   |   9   |           |   3   |   6   |   9   |
    -------------------------           -------------------------
    
*/

#include <bits/stdc++.h>
using namespace std;
#define ROW 3
#define COL 3

int main(){
    int a[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "\nEnter the value of a["<<i<<"]["<<j<<"] : ";
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
    
    cout << "\nTranspose of Matrix A\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << a[j][i] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}