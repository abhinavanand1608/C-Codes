#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int maximize(int arr[], int n){
    sort(arr, arr+n);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i]*i;
    }
    cout<<sum % mod<<endl;
}