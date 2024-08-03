#include <iostream>
using namespace std;

int main()
{
    int i;
    int flag = 1;
    int no;

    cout << "\nEnter the No : ";
    cin >> no;

    for (i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "\n" << no << " is Prime";
    }
    else
    {
        cout << "\n" << no << " is not Prime";
    }

    return 0;
}