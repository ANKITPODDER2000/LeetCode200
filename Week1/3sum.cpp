#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> ans1;
        sort(nums.begin() , nums.end());
        int k = nums.size()-1;
        while(k > 1){
            int i = 0 , j = k-1;
            while(i < j){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    ans.insert({nums[i] , nums[j] , nums[k]});
                    i++;
                    j--;
                }
                else if(sum > 0){
                    j--;
                }
                else{
                    i++;
                }
            }
            k--;
        }
        for(auto it : ans) ans1.push_back(it);
        return ans1;
    }
};