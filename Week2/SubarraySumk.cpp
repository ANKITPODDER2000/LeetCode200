#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int , int> mp;
        int ans = 0;
        int sum = 0;
        for(auto it : nums){
            sum += it;
            if(sum ==k) ans++;
            ans += mp[sum - k];
            mp[sum]++;
        }
        return ans;
    }
};

int main(){
    vector<int> arr({1,2,3 , 1 , 2 , 1 , 3});
    Solution obj;
    cout << obj.subarraySum(arr , 3);
    return 0;
}