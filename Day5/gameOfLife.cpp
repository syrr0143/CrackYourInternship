#include<bits/stdc++.h>
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                                             {-1, 1}, {1, 1}, {1, -1}, {-1, -1}};
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int count = 0;
                for (auto it : directions) {
                    int newi = it.first + i;
                    int newj = it.second + j;
                    if (newi >= 0 && newi < m && newj >= 0 && newj < n) {
                        if (board[newi][newj] == 1) {
                            count++;
                        }
                    }
                }
                if (board[i][j] == 0) {
                    if (count == 3) {
                        ans[i][j] = 1; // Dead cell becomes live
                    }
                } else {
                    if (count == 2 || count == 3) {
                        ans[i][j] = 1; // Live cell remains live
                    } else {
                        ans[i][j] = 0; // Live cell becomes dead
                    }
                }
            }
        }
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = ans[i][j];
            }
        }
    }
};
