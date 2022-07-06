#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    long long ma = arr[0];
    long long mi = arr[0];
    long long prod = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<0)
            swap(mi,ma);
        ma = max((long long) arr[i], ma*arr[i]);
        mi = min((long long) arr[i], mi*arr[i]);

        if(ma>prod)
            prod = ma;
    }
    cout<<prod<<endl;
    
}