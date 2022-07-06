#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    //Pseudo Code
    for(int i=0;i<n-2;i++){
        int s = x - arr[i];
        while(j<k){
            if((arr[j] + arr[k]) == s){
                //print(arr[i], arr[j] and arr[k])
            } 
            else if(arr[j] + arr[k] < s)
                j++;
            else
                k--;
        }
    }
}