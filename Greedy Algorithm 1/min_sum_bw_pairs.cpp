#include<bits/stdc++.h>
using namespace std;

int minSum(int a[], int b[], int n){
    sort(a, a+n);
    sort(b, b+n);

    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + abs(a[i] - b[i]);
    }
    return sum;
}