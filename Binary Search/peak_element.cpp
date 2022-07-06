#include<bits/stdc++.h>
using namespace std;

int peak(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] > 0 and arr[mid] < n){
            if(arr[mid] > arr[mid+1] and arr[mid] > arr[mid-1])
                return arr[mid];
            else if(arr[mid] < arr[mid+1])
                start = mid+1;
            else
                end = mid-1;
        }
        else if(mid == 0){
            if(arr[mid] > arr[mid+1])
                return 0;
            else
                return 1;
        }
        else{
            if(arr[mid] > arr[mid-1])
                return n-1;
            else
                return n-2;
        }
    }
}