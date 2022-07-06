#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& a){
    int n = a.size();
    int dp[n];
    for(int i=0;i<n;i++) dp[i] = 0;
    int ma = a[n-1];
    int mi = a[0];
    for(int i=n-2;i>=0;i--){
        if(a[i]>ma) ma = a[i];
        dp[i] = max(dp[i+1], ma-a[i]);
    }
    for(int i=1;i<n;i++){
        if(a[i]<mi) mi=a[i];
        dp[i] = max(dp[i-1], dp[i]+(a[i]-mi));
    }
    return dp[n-1];
}