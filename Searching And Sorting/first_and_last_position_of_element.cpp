#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,cnt=0,k;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        if(a[i] == x){
            if(cnt == 0){
                k = i;
                cnt++;
            }
            else{
                cnt++;
            }
        }
    }
    cout<<k<<" "<<k+cnt-1<<endl;
}