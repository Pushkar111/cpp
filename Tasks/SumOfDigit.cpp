#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0;
    int no, dup, temp, dc = 0;

    cout << "\nEnter the  No : ";
    cin >> no;

    dup = no;
    while (no > 0)
    {
        dc++;
        temp = no % 10;
        sum += temp;
        no /= 10;
    }

    cout << "\nSum of No "<<dup<<" is "<<sum;
    return 0;
}