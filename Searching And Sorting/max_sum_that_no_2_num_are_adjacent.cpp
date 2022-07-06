#include<bits/stdc++.h>
using namespace std;

int dp[10001];
int solve(int i,int a[]){
    if(i<=-1)
        return 0;
    if(dp[i] != -1) return dp[i];
    int op1 = a[i] + solve(i-2,a);
    int op2 = solve(i-1,a);
    return dp[i] = max(op1,op2);
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dp[n];
        memset(dp,-1,sizeof(dp));
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<solve(n-1,a)<<endl;
    }
    return 0;
}