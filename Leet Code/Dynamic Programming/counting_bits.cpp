#include<bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
    vector<int> res(n+1);
    res[0] = 0;
    for(int i=1;i<=n;i++){
        res[i] = (i % 2 == 1) + res[i/2];
    }  
    return res;
}