#include <bits/stdc++.h>
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        unordered_map<int, int> map;
        map[0] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
            if (map.find(sum - k) != map.end())
            {
                count = count + map[sum - k];
            }
            map[sum]++;
        }
        return count;
    }
};