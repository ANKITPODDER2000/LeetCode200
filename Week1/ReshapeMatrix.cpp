#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        cout << "******** " << r << "  " << c << "***************\n";
        if(r * c != mat.size() * mat[0].size()) return mat;
        vector<vector<int>> arr(r , vector<int>(c));
        int i = 0 , j = 0;
        for(auto it : mat){
            for(auto val : it){
                cout << i << " " << j << "\n";
                arr[i][j++] = val;
                if(j==c){
                    i++;
                    j = 0;
                }
            }
        }
        return arr;
    }
};