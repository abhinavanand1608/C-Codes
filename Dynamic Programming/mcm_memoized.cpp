#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];


int solve(int arr[], int i, int j){
    if(dp[i][j] != -1)
        return dp[i][j];
    if(i >= j) return dp[i][j] = 0;
    int mn = INT_MAX;
    int tempans;
    for(int k = i;k<j;k++){
        tempans = solve(arr, i, k) + solve(arr, k+1, j) + arr[i-1] * arr[k] * arr[j];
    }
    if(mn < tempans)
        mn = tempans;
    return dp[i][j] = mn;
}

int main(){
    memset(dp, -1, sizeof(dp));
    // solve(arr, 1, size-1);
}