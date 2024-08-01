#include <bits/stdc++.h>
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string ans = "";
        int size = strs.size();
        int n = strs[0].length();
        int m = strs[size - 1].length();
        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (strs[0][i] == strs[size - 1][j])
            {
                ans.push_back(strs[0][i]);
                i++;
                j++;
            }
            else
            {
                return ans;
            }
        }
        return ans;
    }
};