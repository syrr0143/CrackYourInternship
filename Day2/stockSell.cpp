#include <bits/stdc++.h>
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minprice = prices[0];
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minprice)
            {
                minprice = prices[i];
            }
            else
            {
                maxprofit = max(maxprofit, prices[i] - minprice);
            }
        }
        return maxprofit;
    }
};