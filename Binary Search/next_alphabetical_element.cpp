#include<bits/stdc++.h>
using namespace std;

char nextchar(char arr[], int n, int key){
    int start = 0;
    int end = n-1;
    char res = '#';

    while(start <= end){
        int mid = (start + end)/2;

        if(arr[mid] == key){
            start = mid + 1;
        }
        else if(arr[mid] < key)
            start = mid + 1;
        else if(arr[mid] > key){
            res = arr[mid];
            end = mid - 1;
        }
    }
    return res;
}
