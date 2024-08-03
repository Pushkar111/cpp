/*
-> Original array

    0       1       2       3       4       5       6       7
-----------------------------------------------------------------
|   10  |   16  |   7   |   14  |   5   |   3   |   2   |   9   |
-----------------------------------------------------------------

==> ans Array

    0       1       2       3       4       5       6       7
-----------------------------------------------------------------
|   5   |   7   |   3   |   6   |   2   |   1   |   0   |   4   |
-----------------------------------------------------------------
*/

#include <bits/stdc++.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    int SIZE = sizeof(arr) / sizeof(int);
    int ans[SIZE];
    
    vector<pair<int, int>> v;
    
    for (int i = 0; i < SIZE; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < SIZE; i++)
    {
        ans[v[i].second] = i;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << ans[i] << "\t";
    }
    return 0;
}