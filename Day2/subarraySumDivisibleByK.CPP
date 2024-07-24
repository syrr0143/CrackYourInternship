
#include <bits/stdc++.h>
class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        unordered_map<int, int> countMap; // To count occurrences of prefix sum mod k
        countMap[0] = 1;                  // Initial prefix sum of 0 (base case)

        int prefixSum = 0; // To store the running prefix sum
        int count = 0;     // To store the count of valid subarrays

        for (int num : nums)
        {
            prefixSum += num;                    // Update the running prefix sum
            int mod = ((prefixSum % k) + k) % k; // Calculate the modulo and normalize it

            if (countMap.find(mod) != countMap.end())
            {
                count += countMap[mod]; // Add the count of previous occurrences of this mod
            }

            countMap[mod]++; // Update the count of this mod
        }

        return count;
    }
};
