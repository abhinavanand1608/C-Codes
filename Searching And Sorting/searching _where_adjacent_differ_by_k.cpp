#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    int x,k;
    cin>>x>>k;
    int ans = -1;
    int i=0;
    while(i < n){
        if(a[i] == x){
            ans = i;
            break;
        }
        i = i + max(1, abs(a[i] - x)/k);
    }
    cout<<ans<<endl;
}