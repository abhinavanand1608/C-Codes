#include<bits/stdc++.h>
using namespace std;

void dfs(int src, vector<int> g[], vector<int> &vis){
    vis[src] = 1;
    for(auto it:g[src]){
        if(!vis[it])
            dfs(src, g, vis);
    }
}


int makeConnections(int n, vector<vector<int>> &edges){
    vector<int> g[n];
    int m = edges.size();
    if(m < n-1) return -1;
    for(int i=0;i<edges.size();i++){
        g[edges[i][0]].push_back(edges[i][1]);
        g[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int> vis(n,0);
    int c=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            c++;
            dfs(i,g,vis);
        }
    }
    return c-1;
}