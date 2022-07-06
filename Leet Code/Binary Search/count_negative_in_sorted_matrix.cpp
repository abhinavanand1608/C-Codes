#include<bits/stdc++.h>
using namespace std;

int countNegative(vector<vector<int>> &grid){
    int m = grid.size();
    int n = grid[0].size();
    int i=0;
    int j=n-1;
    int count = 0;

    while(i>=0 and i < m and j>=0 and j<n){
        if(grid[i][j] < 0){
            count += (m-i);
            j = j-1;
        }
        else
            i = i+1;
    }
    return count;
}