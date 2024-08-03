#include <iostream>
using namespace std;
#include <conio.h>
#include <process.h>

void add(int x, int y)
{
    int z;
    z = x + y;
    cout << "\nAddition = " << z;
}

void sub(int x, int y)
{
    int z;
    z = x - y;
    cout << "\nSubtraction = " << z;
}

void mult(int x, int y)
{
    int z;
    z = x * y;
    cout << "\nMultiplication = " << z;
}

void Div(int x, int y)
{
    int z;
    z = x / y;
    cout << "\nDivision = " << z;
}

int main()
{
    int choice, x, y;

    while (1)
    {

        cout << "\n1.Addition";
        cout << "\n2.Subtraction";
        cout << "\n3.Multiplication";
        cout << "\n4.Division";
        cout << "\n5.Exit";

        cout << "\nEnter the choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;
            add(x, y);
            break;

        case 2:
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;
            sub(x, y);
            break;

        case 3:
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;
            mult(x, y);
            break;

        case 4:
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;
            Div(x, y);
            break;

        case 5:
            exit(0);

        }
        getch();
    }   
    return 0;
} 