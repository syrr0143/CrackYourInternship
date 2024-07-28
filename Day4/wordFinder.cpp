#include <bits/stdc++.h>
class Solution
{
    bool helper(string word, vector<vector<int>> &visited,
                vector<vector<char>> &board, int row, int col, int index)
    {
        if (index == word.size())
        {
            return true;
        }

        // Directions for moving in the grid
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

        // Explore in all 4 possible directions
        for (auto dir : directions)
        {
            int newRow = row + dir.first;
            int newCol = col + dir.second;

            // Check if newRow and newCol are within the board boundaries and not visited
            if (newRow >= 0 && newRow < board.size() && newCol >= 0 && newCol < board[0].size() && visited[newRow][newCol] == 0)
            {
                if (board[newRow][newCol] == word[index])
                {
                    visited[newRow][newCol] = 1; // Mark as visited
                    if (helper(word, visited, board, newRow, newCol, index + 1))
                    {
                        return true;
                    }
                    visited[newRow][newCol] = 0; // Backtrack
                }
            }
        }
        return false;
    }

public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<int>> visited(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (board[i][j] == word[0])
                {
                    visited[i][j] = 1; // Mark as visited
                    if (helper(word, visited, board, i, j, 1))
                    {
                        return true;
                    }
                    visited[i][j] = 0; // Backtrack
                }
            }
        }
        return false;
    }
};
