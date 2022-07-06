#include<bits/stdc++.h>
using namespace std;

int peakIndex(vector<int> &arr){
    int p = 0, l = 0, r = arr.size()-1;

    while(l < r){
        p = l + (r-l)/2;
        if(arr[p] > arr[p-1] and arr[p] > arr[p+1]) return p;
        else if(arr[p] < arr[p+1]) l = p;
        else r = p;
    }
    return -1;
}