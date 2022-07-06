#include<bits/stdc++.h>
using namespace std;

string printLCS(string a, string b, int m, int n){
    string ans = " ";
    if(m == 0 or n == 0) return " ";
    char dp[m][n];
    int i = m;
    int j = n;

    while(i > 0 and j > 0){
        if(a[i-1] == b[j-1]){
            ans.push_back(a[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}