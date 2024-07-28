#include <bits/stdc++.h>
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                i++;
            }
            else
            {
                swap(nums1[i], nums2[j]);
                while ((j + 1) < nums2.size() && nums2[j] > nums2[j + 1])
                {
                    swap(nums2[j], nums2[j + 1]);
                    j++;
                }
                j = 0;
            }
        }
        for (auto it : nums2)
        {
            nums1[m++] = it;
        }
    }
};