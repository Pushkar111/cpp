#include <iostream>
using namespace std;
#include <conio.h>
#include <process.h>

void add()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x + y;
    cout << "\nAddition = " << z;
}

void sub()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x - y;
    cout << "\nSubstraction = " << z;
}

void mult()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x * y;
    cout << "\nMultiplication = " << z;
}

void div()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x / y;
    cout << "\nDivision = " << z;
}

int main()
{
    int choice;

    while (1)
    {

        cout << "\n1.Addition";
        cout << "\n2.Substraction";
        cout << "\n3.Multiplication";
        cout << "\n4.Division";
        cout << "\n5.Exit";

        cout << "\nEnter the chocie : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            mult();
            break;

        case 4:
            div();
            break;

        case 5:
            exit(0);

        } 
        getch();
    } 
    return 0;
} 