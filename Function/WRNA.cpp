#include <iostream>
using namespace std;
#include <conio.h>
#include <process.h>

int add()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x + y;
    return z;
}

int sub()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x - y;
    return z;
}

int mult()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x * y;
    return z;
}

int div()
{
    int x, y, z;
    cout << "\nEnter No1 : ";
    cin >> x;
    cout << "\nEnter No2 : ";
    cin >> y;
    z = x / y;
    return z;
}

int main()
{
    int choice, ans;

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
            ans = add();
            cout << "\nAddition = " << ans;
            break;

        case 2:
            ans = sub();
            cout << "\nSubstraction = " << ans;
            break;

        case 3:
            ans = mult();
            cout << "\nMultiplication = " << ans;
            break;

        case 4:
            ans = div();
            cout << "\nDivision = " << ans;
            break;

        case 5:
            exit(0);

        }
        getch();
    }
    return 0;
}