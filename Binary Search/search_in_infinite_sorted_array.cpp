#include<bits/stdc++.h>
using namespace std;

int infinitearray(int arr[], int n, int key){
    int low = 0;
    int high = 1;
    while(key > arr[high]){
        low = high;
        high = high * 2;
    }
    binarysearch(arr, low, high, key);
}