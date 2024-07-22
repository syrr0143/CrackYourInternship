#include <bits/stdc++.h>
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        unordered_set<int> zerorow;
        unordered_set<int> zerocol;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    zerorow.insert(i);
                    zerocol.insert(j);
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (zerorow.count(i) || zerocol.count(j))
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};