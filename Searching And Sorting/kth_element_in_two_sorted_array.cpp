#include<bits/stdc++.h>
using namespace std;

int kth(int A[], int B[], int m, int n, int k){
    int x = 0, i = 0, j = 0;
    while(i < m and j < n){
        if(A[i] < B[j]){
            x++;
            if(x == k)
                return A[i];
            i++;
        }
        else{
            x++;
            if(x == k)
                return B[j];
            j++;
        }
    }

    while(i < m){
        x++;
        if(x == k)
            return A[i];
        i++;
    }

    while(j < n){
        x++;
        if(x == k)
            return B[j];
        j++;
    }
}