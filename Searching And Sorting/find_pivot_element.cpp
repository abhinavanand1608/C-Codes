#include<bits/stdc++.h>
using namespace std;

int findIndex(int s, int e, int arr[]){
    int m = (s + e)/2;

    if(arr[m] > arr[m+1])
        return arr[m+1];
    else{
        if(arr[s] > arr[m])
            e = m-1;
        else
            s = m+1;
    }
}