#include<bits/stdc++.h>
using namespace std;


int solve(int arr[], int i, int j){
    if(i >= j)
        return 0;
    int mn = INT_MAX;
    int tempans;
    for(int k = i;k<j;k++){
        tempans = solve(arr, i, k) + solve(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];
    }
    if(tempans < mn)
        mn = tempans;
    return mn;
}