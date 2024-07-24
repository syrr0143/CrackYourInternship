#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for( int i =0;i< nums.size();i++){
           map[nums[i]] = i;
        }
        vector<int> ans;
        for( int i = 0;i< nums.size();i++){
            int req = target - nums[i];
            if(map.find(req) != map.end() && map[req] != i){
                ans.push_back(i);
                ans.push_back(map[req]);
        return ans;
break;
            }
        }
        return ans;
    }
};