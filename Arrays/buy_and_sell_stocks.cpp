#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,profit=0,cp=INT_MAX;
    cin>>n;
    int arr[n],pre[n];;
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        if(arr[i]<cp)
            cp=arr[i];
        else if(arr[i]-cp>profit)
            profit = arr[i]-cp;
    }
    cout<<profit<<endl;
}