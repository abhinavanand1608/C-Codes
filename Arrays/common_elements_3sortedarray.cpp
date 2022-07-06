#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    unordered_map<int,int> m;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
        m[b[i]]++;
    }
    for(int i=0;i<n3;i++){
        cin>>c[i];
        m[c[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++){          
        if(i->second > 1)
            cout<<i->first<<" ";
    }
}