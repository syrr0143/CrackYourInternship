#include <bits/stdc++.h>
class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int leftsum = 0;
        for (int i = 0; i < k; i++)
        {
            leftsum += cardPoints[i];
        }
        int rightsum = 0;
        int right = n - 1;
        int ans = leftsum;
        // picking the possible combination from start and end
        for (int i = k - 1; i >= 0; i--)
        {
            leftsum = leftsum - cardPoints[i];
            rightsum += cardPoints[right--];
            ans = max(ans, leftsum + rightsum);
        }
        return ans;
    }
};