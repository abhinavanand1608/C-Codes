#include<bits/stdc++.h>
using namespace std;

int minElements(int arr[], int n){
    int cnt = 0;
    sort(arr, arr+n);
    int sum = 0, subsum = 0;
    for(int i=0;i<n;i++)
        sum += arr[i];
    for(int i=n-1;i>=0;i--){
        subsum += arr[n-1];
        cnt++;
        sum -= arr[n-1];
        if(subsum > sum){
            break;
        }
    }
    cout<<cnt<<endl;
}