#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
private:
    void helper(vector<int> &nums, int pos, vector<vector<int>> &result, set<vector<int>> &seen)
    {
        if (pos == nums.size())
        {
            if (seen.find(nums) == seen.end())
            {
                seen.insert(nums);
                result.push_back(nums);
            }
            return;
        }
        for (int i = pos; i < nums.size(); i++)
        {
            // To avoid duplicate permutations, skip the same elements
            if (i != pos && nums[i] == nums[pos])
                continue;
            swap(nums[i], nums[pos]);
            helper(nums, pos + 1, result, seen);
            swap(nums[i], nums[pos]); // backtrack
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> results;
        set<vector<int>> seen;
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        helper(nums, 0, results, seen);
        return results;
    }
};