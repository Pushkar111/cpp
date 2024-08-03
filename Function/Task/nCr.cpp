/*
    Task => nCr = n! / [r! * (n - r)!],
                    
*/

#include <iostream>
using namespace std;

int fact(int no){
    int i, fact = 1;

    for ( i = 1; i <= no; i++)
    {
        fact *= i;
    }
    
    return fact;
}

int main(){
    int n, ans, r;

    cout << "\nEnter the value of n : ";
    cin >> n;

    cout << "\nEnter the value of r : ";
    cin >> r;

    ans = fact(n) / (fact(r) * fact(n - r));

    cout << n << "C" << r << " = " << ans;

    return 0;
}