/*
idea is to move all the non zero in forward ,and at last place all the zero in the end
 */

#include <bits/stdc++.h>
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int lastNonZeroFoundAt = 0;

        // Move all the non-zero elements to the beginning of the array
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                nums[lastNonZeroFoundAt++] = nums[i];
            }
        }

        // Fill the remaining positions with zeros
        for (int i = lastNonZeroFoundAt; i < nums.size(); ++i)
        {
            nums[i] = 0;
        }
    }
};
