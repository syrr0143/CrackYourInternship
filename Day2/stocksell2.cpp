#include <bits/stdc++.h>
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int tp = 0;
        int cp = 0;

        for (int i = 1; i < prices.size(); ++i)
        {
            if (prices[i] > prices[i - 1])
            {
                cp += prices[i] - prices[i - 1];
            }
            else
            {
                tp += cp;
                cp = 0;
            }
        }
        tp += cp;
        return tp;
    }
};