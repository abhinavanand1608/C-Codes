#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> vis, vector<int> &storeDFS){
    storeDFS.push_back(node);
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it])
            dfs(it, adj, vis, storeDFS);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]){
    vector<int> storeDFS;
    vector<int> vis(V+1);
    for(int i=1;i<=V;i++){
        if(!vis[i])
            dfs(i, adj, vis, storeDFS);
    }
    return storeDFS;
}
