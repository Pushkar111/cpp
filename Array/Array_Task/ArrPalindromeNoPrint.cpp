#include <iostream>
using namespace std;
#define SIZE 5

int main(){
    int i, dup, no, flag = 1, j ,temp, rev = 0;
    int a[SIZE];

    for ( i = 0; i < SIZE; i++)
    {
        cout<<"\nEnter the value of a["<<i<<"] : ";
        cin >> a[i];
    }
    
    cout<<"\nThe Array is\n";
    cout<<"----------------------------------------------------\n";
    for ( i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }
    
    for ( i = 0; i < SIZE; i++)
    {
        dup = no = a[i];
        rev = 0;

        while (no > 0)
        {
            temp = no % 10;
            rev = (rev * 10) + temp;
            no /= 10;
        }

        if (dup == rev)
        {
            cout<<"\n a["<<i<<"] => "<<dup;
        }
    }
    
    return 0;
}