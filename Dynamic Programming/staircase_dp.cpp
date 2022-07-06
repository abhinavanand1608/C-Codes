#include <bits/stdc++.h>
#define ll long long 
#define  rep(i,a,n)  for(i=a;i<n;i++) 
#define  repe(i,a,n)  for(i=a;i<=n;i++) 
#define  pb(a)  push_back(a) 
#define po   pop_out()
#define fio()  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase()  int t; cin>>t; while(t--)
using namespace std;

int main(){
    int t;
    cin >> t;
    long long int dp[100001];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    long long int mod = 1e9 + 7;
    for(int i=3;i<=100000;i++)
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % mod;
    while(t--){
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
}