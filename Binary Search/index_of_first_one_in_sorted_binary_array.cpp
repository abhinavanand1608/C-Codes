#include<bits/stdc++.h>
using namespace std;

int searchinfinite(int arr[], int n, int key){
    int start = 0;
    int end = 1;

    while(arr[end] < key){
        int mid = (start + end)/2;
        start = end;
        end = end * 2;
    }
}

int firstOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start <= end){
        int mid = (start + end)/2;
        if(key == arr[mid]){
            res = arr[mid];
            end = mid-1;
        }
        else if(arr[mid] < key)
            start = mid+1;
        else if(arr[mid] > key)
            end = mid - 1;
    }
    return res;
}