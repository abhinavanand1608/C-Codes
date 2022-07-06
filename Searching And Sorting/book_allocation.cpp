#include<bits/stdc++.h>
using namespace std;

bool solve(int *a, int n, int mid, int m){
    int sum = 0;
    int stu = 1;
    for(int i=0;i<n;i++){
        if(a[i] > mid) return false;
        if(sum + a[i] > mid){
            stu++;
            sum = a[i];
            if(stu > m) return false;
        }
        else sum += a[i];
    }
    return true;
}




int findPages(int *a, int n, int m){
    int lb = 0;
    int s = 0;
    int ans = 0;

    for(int i=0;i<n;i++) s += a[i];
    int ub = s;
    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(solve(a,n,mid,m)){
            ans = mid;
            ub = mid - 1;
        }
        else{
            lb = mid + 1;
        }
    }
    return ans;
}