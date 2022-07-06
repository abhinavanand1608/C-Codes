#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,c=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        int x = k - arr[i];

        if(m[x] == 0){
            m[arr[i]]++;
        }
        else{
            // m[arr[i]]++;
            c+=m[x];
            m[arr[i]]++;
        }
    }    
    cout<<c<<endl;
}