#include<bits/stdc++.h>
using namespace std;


int minPlatforms(int arr[], int dep[], int n){
    sort(arr, arr+n);
    sort(dep, dep+n);
    int pt_no = 1;
    int j = 0;
    int i = 1;
    while(i < n){
        if(arr[i] <= dep[j])
            pt_no++;
        else
            j++;
        i++;
    }
    return pt_no;
}