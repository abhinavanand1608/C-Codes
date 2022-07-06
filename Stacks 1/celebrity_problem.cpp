#include<bits/stdc++.h>
using namespace std;

//Brute Force
int celebrity(vector<vector<int>> &a, int n){
    int in[n]={0},out[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] == 1){
                in[j]++;
                out[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(in[i] == n-1 and out[i] == 0)
            return i;
    }
    return -1;
}

//Optimized
int celebrityy(vector<vector<int>> &a, int n){
    int c = 0;
    for(int i=0;i<n;i++){
        if(a[c][i] == 1)
            c = i;
    }
    for(int i=0;i<n;i++){
        if(i!=c and (a[c][i] == 1 or a[i][c] == 0))
            return -1;
    }
    return c;
}