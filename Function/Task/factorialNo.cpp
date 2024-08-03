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
    int no;
    int ans;

    cout << "\nEnter the number : ";
    cin >> no;

    ans = fact(no);

    cout << "\nFactorial = " << ans;

    return 0;
}