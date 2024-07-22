/*
idead behind this approach is to store all the number in a map and find it before inserting it in the map , if element already exist then return this element as there is only dulicate element in this array
*/
#include <bits/stdc++.h>
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(nums[i]) != map.end())
            {
                return nums[i];
            }
            map[nums[i]]++;
        }
        return -1;
    }
};

// APPROACH 2 o(n) TIME AND O(1) SPACE COMPLEXITY
/*
this  approach is same as we do in linked list to find the cycle in any given list , usinng tortoise and hare approach
 */

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // Phase 1: Finding the intersection point of the two runners
        int tortoise = nums[0];
        int hare = nums[0];
        do
        {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Phase 2: Finding the entrance to the cycle
        tortoise = nums[0];
        while (tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};
