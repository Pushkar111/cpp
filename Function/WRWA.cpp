#include <iostream>
#include <conio.h>
using namespace std;
#include <process.h>

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int sub(int x, int y)
{
    int z;
    z = x - y;
    return z;
}

int mult(int x, int y)
{
    int z;
    z = x * y;
    return z;
}

int Div(int x, int y)
{
    int z;
    z = x / y;
    return z;
}

int main()
{
    int choice, x, y, ans;

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
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;

            ans = add(x, y);

            cout << "\nAdition = " << ans;
            break;

        case 2:
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;

            ans = sub(x, y);

            cout << "\nSubstraction = " << ans;
            break;

        case 3:
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;

            ans = mult(x, y);

            cout << "\nMultiplication = " << ans;
            break;

        case 4:
            cout << "\nEnter No1 : ";
            cin >> x;
            cout << "\nEnter No2 : ";
            cin >> y;

            ans = Div(x, y);

            cout << "\nDivision = " << ans;
            break;

        case 5:
            exit(0);
        }
        getch();
    }
    return 0;
}