#include <iostream>
using namespace std;

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm, i;

    for (i = 1; i <= n; i++){
        cout << t1 << "\t";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

}

int main(){
    int n;

    cout << "\nEnter the N Term : ";
    cin >> n;

    fib(n);

    return 0;
}