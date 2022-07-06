#include<bits/stdc++.h>
using namespace std;

int maxdiff(int arr[], int n){
    vector<int> finalSequence;
    sort(arr, arr+n);
    for(int i=0;i<n/2;i++){
        finalSequence.push_back(arr[i]);
        finalSequence.push_back(arr[n-i-1]);
    }
    if(n % 2 != 0)
        finalSequence.push_back(arr[n/2]);
    int MaximumSum = 0;
    for(int i=0;i<n-1;i++){
        MaximumSum += abs(finalSequence[i] - finalSequence[i+1]);
    }
    MaximumSum += abs(finalSequence[n - 1] - finalSequence[0]);
    return MaximumSum;
}

