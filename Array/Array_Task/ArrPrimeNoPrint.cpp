#include <iostream>
#define SIZE 4
using namespace std;

int main(){
    int no, dup,i ,j, flag = 1;
    int a[SIZE];
    
    for ( i = 0; i < SIZE; i++)
    {
        cout <<"\nEnter the value of a["<<i<<"] : ";
        cin >> a[i];
    }

    cout<<"\nThe Array is\n";\
    cout <<"-------------------------------\n";    
    for ( i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    for ( i = 0; i < SIZE; i++)
    {
        no = a[i];
        flag = 1;
        for ( j = 2; j < no; j++)
        {
            if (no % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            if (a[i] != 2 && a[i] != 1)
            {
                cout<<"\na["<<i<<"] => "<<a[i];
            }
        }
    }

    return 0;
}