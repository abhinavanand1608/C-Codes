#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    int c=0;
    sort(a,a+n);
    for(int k=0;k<n-2;k++){
        int i = k+1;
        int j = n-1;
        while(i<j){
            int s = a[k]+a[i]+a[j];
            if(s<x){
                c += (j-i);
                i++;
            }
            else j--;
        }
    }
    cout<<c<<endl;
}