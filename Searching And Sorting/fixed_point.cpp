#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];

    for(int i=1;i<n+1;i++) cin>>a[i];

    for(int i=1;i<n+1;i++){
        if(a[i] == i){
            cout<<a[i]<<endl;
            break;
        }
    }
}