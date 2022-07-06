#include<bits/stdc++.h>
using namespace std;

int findmindiff(int a[], int n, int m){
    sort(a, a+n);
    int min = INT_MAX;

    int ans;
    for(int i=0;i+m-1<n;i++){
        int d = a[i+m-1] - a[i];

        if(d < min)
            min = d;
    }
    cout<<min<<endl;
}