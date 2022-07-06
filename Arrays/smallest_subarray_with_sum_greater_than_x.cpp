#include<bits/stdc++.h>
using namespace std;

//1 Method
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mi = INT_MAX;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                s+=a[j];
                if(s>x)
                    mi=min(mi,j-i+1);
            }
        }
        cout<<mi<<endl;
    }
}

//2 Method
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mi=INT_MAX;
        int i=0,j=0;
        int s=0;
        while(i<=j and j<n){
            while(s<=x and j<n)
                s += a[j++];
            while(s>x and i<j){
                mi=min(mi,j-i);
                s -= a[i];
                i++;
            }
        }
        cout<<mi<<endl;
    }
}