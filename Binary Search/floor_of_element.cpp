#include<bits/stdc++.h>
using namespace std;

int floor(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int res;

    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key)
            return arr[mid];
        else if(arr[mid] < key){
            res = arr[mid];
            start = mid + 1;
        }
        else if(arr[mid] > key){
            res = arr[mid];
            end = mid - 1;
        }
    }
}