/*
    print below output on the console

    1   5   6
    2   6   8
    3   7   10
    4   8   12
    5   9   14

*/

#include <iostream>
using namespace std;

int main(){
    int i, j, k;

    for ( i = 1, j = 6; i <= 5; i++, j++)
    {
        k = i + j;
        cout<<i<<"\t"<<j<<"\t"<<k<<endl;
    }
    return 0;
}