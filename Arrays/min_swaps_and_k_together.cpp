#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[n];

    int k;
    cin>>k;
    int good = 0;
    for(int i=0;i<n;i++){
        if(a[i] <= k) good++;
    }
    int mi = INT_MAX;
    int bad = 0;
    for(int i=0;i<good;i++){
        if(a[i]>k) bad++;
    }
    int i=0,j=good-1;
    while(j<n){
        mi=min(mi,bad);
        j++;
        if(j<n and a[j]>k) bad++;
        if(a[i] > k) bad--;
        i++;
    }
    if(mi==INT_MAX) cout<<"0\n";
    else cout<<mi<<endl;
}