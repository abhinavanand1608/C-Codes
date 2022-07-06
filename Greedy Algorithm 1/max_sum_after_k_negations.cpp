#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k){
    sort(arr, arr+n);
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0 and k > 0){
            arr[i] = (-1) * arr[i];
            k--;
        }
    }
    for(int i=0;i<n;i++)
        sum += arr[i];
    int x = *min_element(arr, arr+n);
    if(k & 1) sum -= 2*x;
    return sum;
}