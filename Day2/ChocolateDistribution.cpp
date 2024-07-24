#include <bits/stdc++.h>
class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_map<int, int> map;
        int count = 0;
        for (int i = 0; i < candyType.size(); i++)
        {
            if (map.find(candyType[i]) != map.end())
            {
                continue;
            }
            else
            {
                map[candyType[i]]++;
                count++;
            }
        }

        if (count > candyType.size() / 2)
        {
            return candyType.size() / 2;
        }
        else
        {
            return count;
        }
    }
};