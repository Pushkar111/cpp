/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.



Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


*/
#include <bits/stdc++.h>
using namespace std;
#define SIZE 4

int main()
{
    int no[SIZE];
    int target, temp;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the value of no[" << i << "] : ";
        cin >> no[i];
    }

    cout << "\n This is are Numbers\n";
    cout << "--------------------------------------------------------\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << no[i] << "\t";
    }

    cout << "\nEnter the target : ";
    cin >> target;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (no[i] + no[j] == target)
            {
                cout << "[" << i << "," << j << "]" << "\n";
            }
        }
    }

    return 0;
}