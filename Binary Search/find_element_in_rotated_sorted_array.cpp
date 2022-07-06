#include<bits/stdc++.h>
using namespace std;

int search(int a[], int target, int n){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high) >> 1;
        if(a[mid] == target) return mid;

        if(a[low] <= a[mid]){
            if(target >= a[low] and target <= a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else{
            if(target >= a[mid] and target <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}