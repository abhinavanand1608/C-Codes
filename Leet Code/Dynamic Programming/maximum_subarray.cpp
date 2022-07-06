#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int dp[nums.size() + 1];
    dp[0] = nums[0];
    int maxi = nums[0];
    for(int i=1;i<nums.size();i++){
        dp[i] = max(dp[i-1] + nums[i], nums[i]);
        maxi = max(maxi, dp[i]);
    }   
    return maxi;
}