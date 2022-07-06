#include<bits/stdc++.h>
using namespace std;

int countSS(int arr[], int sum, int n){
    int t[n+1][sum+1];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<sum;j++){
            if(i == 0)
                t[i][j] = 0;
            if(j == 0)
                t[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<sum;j++){
            if(arr[i-1] <= sum)
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            else
                t[i][j] = t[i-1][j];
        }
    }
    return t[n][sum];
}

int countwithdiff(int arr[], int diff, int n){
    int sumArr = 0;
    for(int i=0;i<n;i++)
        sumArr += arr[i];
    int sum = (diff + sumArr)/2;
    int ans = countSS(arr, sum, n);
    return ans;
}