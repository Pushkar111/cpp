/*
    👨 Problem => An Arithmetic array is an array that contains atleast two integers and the differences between consecutive integers are equal.
    For Example :
        [9, 10] ,[3, 3, 3] and [9, 7, 5, 3] are Arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2] and [1, 2, 4] are not Arithmetic arrays.

    Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. she wants to choose a contiguous Arithmetic SubArray from her array that has the maximum length. Please help her to determine the length of the longest contiguous Arithmetic SubArray.

    👨 Input =>
        The First lines of the input gives the number of test cases, T.T test cases follow. Each case test begins with a line containing the integer N. The Second lines contains N integers. The i-th integer is A.

    👨 Output =>
        For Each test case, output one line containing case #x: y, where x is the test case number (starting from 1) and y is length of the longest contiguous Arithmetic SubArray.

    👨 Constraints =>
        Time limit: 20 Seconds per test set.
        Memory limit: 1GB.

        1 <= T <= 100.
        0 <= A(i) <= 10^9.

        Test set 1
        2 <= N <= 2000.

        Test set 2
        2 <= N <= 2 * 10^5 for at most 10 test cases.

        For the Remaining cases, 2 <= N <= 2000.
*/

/*
    1 Second = 10^8 Operations(approx)
    20 Second = 2 * 10^9 Operations(approx)

    👨‍🎓 Sample Test Case =>
    -> let arr is,
    ---------------------------------------------------------
    |   10  |   7   |   4   |   6   |   8   |   10  |   11  |
    ---------------------------------------------------------
            -3      -3      2       2       2       1

    👨‍🎓 Intuition and Approach =>
    -> Loop over the array and find the answer

    -> Maintain the following variables
        (1) Previous Common difference (pd)
        (2) Current Arithmetic SubArray Length (Current)
        (3) Max Arithmetic SubArray Length (ans)
*/

#include <bits/stdc++.h>
using namespace std;
#define SIZE 7

int main()
{
    int a[SIZE];
    int pd, current, ans = 2;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of the a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    pd = a[1] - a[0];
    ans = 2;
    current = 2;

    for (int j = 2; j < SIZE; j++)
    {
        if (pd == a[j] - a[j - 1])
        {
            current++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            current = 2;
        }
        ans = max(ans, current);
    }

    cout << "\nYour Ans : " << ans;

    return 0;
}