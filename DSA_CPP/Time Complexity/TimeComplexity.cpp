/*
Time Complexity :-
    Time Complexity of an algorithm quantities the amount of time taken by a program to run as a function of length of the input
*/

#include <bits/stdc++.h>
using namespace std;
#define n 5

/* (1)
int main()
{
    int i;
    int x = 0;

    for (i = 1; i <= n; i++)
    {
        x += 1;  // Time ∝ n (linear)
    }

    return 0;
}
*/

/* (2)
int main()
{
    int i, j;
    int x = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            x += 1; // Time ∝ n*n (Quadratic)
        }
    }

    return 0;
}
*/

/* (3)
int main()
{
    int i, j, k;
    int x = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            for ( k = 1; k <= n; k++)
            {
                x += 1; // Time ∝ n*n*n (cubic)
            }            
        }
    }

    return 0;
}
*/