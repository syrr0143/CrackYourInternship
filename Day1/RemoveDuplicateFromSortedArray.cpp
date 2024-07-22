/*
idea is to maintain two pointer one is to track the current element in the array another for the last unique element of the array
*/

#include <bits/stdc++.h>
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int j = 0;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[j])
            {
                ++j;
                nums[j] = nums[i];
            }
        }
        return j + 1; // j is the index of the last unique element, so the size is j + 1
    }
};
