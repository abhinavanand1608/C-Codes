#include<bits/stdc++.h>
using namespace std;

int minSum(int a[], int b[], int n){
    int sum=0;
    sort(a,a+n);
    sort(b,b+n);

    for(int i=0;i<n;i++)
        sum += abs(a[i]-b[i]);
    
    return sum;
}