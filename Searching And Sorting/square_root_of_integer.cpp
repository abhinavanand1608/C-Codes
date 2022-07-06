#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    for(int i = 1;i*i<=n;i++){
        if(i*i < n)
            cnt++;
    }
    cout<<cnt<<endl;
}