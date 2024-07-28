#include<bits/stdc++.h>
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0, left =0;
        int right = col - 1;
        int bottom  = row -1;
        vector<int> ans;
        while( top <= bottom  && left <= right){
            for( int i =left ; i<= right ;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for( int i =top ;i<= bottom ;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
           if (top <= bottom) {  // Check if there's any row left to traverse
                // Traverse from right to left
                for (int i = right; i >= left; --i) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {  // Check if there's any column left to traverse
                // Traverse from bottom to top
                for (int i = bottom; i >= top; --i) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};