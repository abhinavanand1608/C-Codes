#include<bits/stdc++.h>
using namespace std;

int maxProduct(int a[], int n){
    int count_zero = 0, count_neg = 0,prod = 1;
    int max_neg = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            count_zero++;
            continue;
        }
        else if(a[i] < 0){
            count_neg++;
            max_neg = max(max_neg,a[i]);
        }
        prod = prod * a[i];
    }
    if(count_zero == n)
        return 0;
    else if(count_neg == 1 and count_zero + count_neg == n)
        return 0;
    else if(count_neg & 1)
        prod = prod / max_neg;
    cout<<prod;
}