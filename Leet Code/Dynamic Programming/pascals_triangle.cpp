#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int n) {
    vector<vector<int>> A;
    vector<int> v1 = {1};
    A.push_back(v1);

    if(n == 1)
        return A;  
    
    vector<int> v2 = {1, 1};
    A.push_back(v2);
    if(n == 2)
        return A;
    
    for(int i=2;i<n;i++){
        vector<int> v;
        v.push_back(1);
        for(int j=1;j<i;j++){
            int k = A[i-1][j-1] + A[i-1][j];
            v.push_back(k);
        }
        v.push_back(1);
        A.push_back(v);
    }
    return A;
}