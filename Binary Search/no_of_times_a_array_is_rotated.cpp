#include<bits/stdc++.h>
using namespace std;

int rotatedarray(int arr[], int low, int high){
    if(low > high)
        return 0;
    if(high == low)
        return low;
    int mid = low + (high - low)/2;

    if(mid < high and arr[mid + 1] < arr[mid])
        return mid + 1;
    if(mid > low and arr[mid] < arr[mid - 1])
        return mid;

    if(arr[high] > arr[mid])
        return rotatedarray(arr, low, mid - 1);
    return rotatedarray(arr, mid + 1, high);
}