#include<bits/stdc++.h>
using namespace std;

int rec(vector<vector<int>>& matrix, int i, int j, int memo[][]){
    if(i<0 or j<0 or i>=matrix.size() or j>=matrix[0].size() or matrix[i][j] == 0)
        return 0;
    if(memo[i][j] != 0) return memo[i][j];
    int ans = 0;
    int l = rec(matrix, i, j+1, memo), r = rec(matrix, i+1, j, memo), t = rec(matrix, i+1, j+1, memo);
    ans = 1 + min(l, min(r,t));
    memo[i][j] = ans;
    return memo[i][j];
}

int countSquares(vector<vector<int>>& matrix) {
    int ans = 0;
    int n = matrix.size(), m = matrix[0].size();
    int memo[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 1)
                ans += rec(matrix, i, j, memo);
        }
    }
    return ans;
}