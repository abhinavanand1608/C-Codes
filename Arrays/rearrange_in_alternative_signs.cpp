#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int left = 0;
    int right = n-1;
    while(left<=right){
        if(a[left] < 0 and a[right] > 0){
            swap(a[left], a[right]);
            left++;
            right--;
        }
        else if(a[left] > 0 and a[right] < 0){
            left++;
            right--;
        }
        else if(a[left]>0){
            left++;
        }
        else if(a[right] < 0)
            right--;
    }
    if(left==0 or left==n){
        for(int m=0;m<n;m++) cout<<a[m]<<" ";
        cout<<endl;
    }
    else{
        int k=0;
        while(k<n and left<n){
            swap(a[k],a[left]);
            k += 2;
            left++;
        }
        for(int m=0;m<n;m++) cout<<a[m]<<" ";
        cout<<endl;
    }
}