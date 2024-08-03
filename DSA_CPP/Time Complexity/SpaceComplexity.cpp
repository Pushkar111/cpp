/*
Space Complexity :-
    Space Complexity of an algorithm quantifies the amount of time taken by program to run as a function of length of the input. It is directly proportional to the largest memory your program acquires at any instant during run time.
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Space Complexity -> Constant
    int i, x = 0, n;
    cout << "\nEnter the range : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        x += 1;
    }

    return 0;
}
*/
/*
Array of size N => space ∝ n (linear)
-----------------------------------------------------------------
|   A0  |   A1  |   A2  |   A3   |  A4  |       |       | A[N-1]|
-----------------------------------------------------------------
*/