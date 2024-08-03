/*
👨 Problem =>
    Isyana is given the number of visitors at her local theme park on N consecutive days. The number of the visitors on the i-th day is V. A day is Record Breaking if it satisfies both of the following conditions:
        (1) The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
        (2) Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
    Note that the very first day could be record breaking day!
    Please help Isyana find out the number of record breaking days.

    👨 Input =>
        The First lines of the input gives the number of test cases, T.T test cases follow. Each case test begins with a line containing the integer N. The Second lines contains N integers. The i-th integer is V(i).

    👨 Output =>
        For Each test case, output one line containing case #x: y, where x is the test case number (starting from 1) and y number of Record Breaking days.

    👨 Constraints =>
        Time limit: 20 Seconds per test set.
        Memory limit: 1GB.

        1 <= T <= 100.
        0 <= V(i) <= 2 * 10^5.

        Test set 1
        1 <= N <= 1000.

        Test set 2
        1 <= N <= 2 * 10^5 for at most 10 test cases.

        For the Remaining cases, 1 <= N <= 1000.
*/

/*
    1 Second = 10^8 Operations(approx)
    20 Second = 2 * 10^9 Operations(approx)

    👨‍🎓 Sample Test Case =>
    -> let arr is,
    -----------------------------------------------------------------
    |   1  |   2   |   0   |   7   |   2   |    0   |   2   |   2   |
    -----------------------------------------------------------------

    👨‍🎓 Intuition and Approach =>
    -> Loop over the array and find the answer

    -> Maintain the following variables
        (1) Previous Common difference (pd)
        (2) Current Arithmetic SubArray Length (Current)
        (3) Max Arithmetic SubArray Length (ans)
*/

#include <bits/stdc++.h>
using namespace std;
#define SIZE 8

int main()
{
    int a[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << "\t";
    }

    a[SIZE + 1];
    a[SIZE] = -1;

    if (SIZE == 1)
    {
        cout << "\nRecord Breaking days : 1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout << "\nRecord Breaking days : " << ans;

    return 0;
}