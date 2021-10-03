#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last_index[26];
        for(int i = 0 ; i < s.length() ; i++) last_index[s[i] - 'a'] = i;
        vector<int> ans;

        for(int i = 0 ; i < s.length() ;){
            int k = i;
            int j = last_index[s[i] - 'a'];
            while(i < j){
                j = max(last_index[s[i] - 'a'] , j);
                i++;
            }
            ans.push_back(j-k+1);
            i = j+1;
        }
        return ans;
    }
};

int main(){
    string s = "abc";
    Solution ob;
    vector<int> ans = ob.partitionLabels(s);
    for(auto it : ans) cout << it << " ";
    return 0;
}