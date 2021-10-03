#include <bits/stdc++.h>
using namespace std;

class Solution {
    int getMaxLength(vector<string> words){
        int Max = -1;
        for(auto it : words){
            int len = it.length();
            if(Max < len)  Max = len;
        }
        return Max;
    }
   vector<string> getWords(string s){
       string temp = "";
       vector<string> ans;
       for(auto it : s){
           if(it != ' ') temp+= it;
           else{
               ans.push_back(temp);
               temp = "";
           }
       }
       if(temp != "") ans.push_back(temp);
       return ans;
   }
   string right_trim(string s){
       string ans = "";
       bool getLetter = false;
       for(int i = s.length()-1 ; i>=0 ; i--){
           if(getLetter) ans = s[i] + ans;
           else if(s[i] != ' '){
               getLetter = true;
               ans = s[i] + ans;
           }
       }
       return ans;
   }
public:
    vector<string> printVertically(string s) {
        vector<string> words = getWords(s);
        int maxLen = getMaxLength(words);
        vector<string> ans;
        
        for(int i=0 ; i < maxLen ; i++) ans.push_back("");
        
        for(int i = 0 ; i < maxLen ; i++){
            for(int j = 0 ; j < words.size() ; j++){
                if(words[j].length() <= i) ans[i] += " ";
                else ans[i] += words[j][i];
            }
        }
        for(int i = 0 ; i < ans.size() ; i++) ans[i] = right_trim(ans[i]);
        return ans;
    }
};

int main(){
    string s = "CONTEST IS COMING";
    Solution obj;
    vector<string> ans = obj.printVertically(s);
    for(auto it : ans) cout << it << it.length() << endl;
    return 0;
}