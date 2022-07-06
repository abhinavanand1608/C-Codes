#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int node, int vis[], int dfsvis[], vector<int> adj[]){
    vis[node] = 1;
    dfsvis[node] = 1;

    for(auto it:adj[node]){
        if(!vis[it]){
            if(checkCycle(it, vis, dfsvis, adj)) return true;
            else if(dfsvis[it]) return true;
        }
    }
    dfsvis[node] = 0;
    return false;
}

bool isCyclic(int v, vector<int> adj[]){
    int vis[v], dfsvis[v];
    memset(vis,0,sizeof(vis));
    memset(dfsvis,0,sizeof(dfsvis));

    for(int i=0;i<v;i++){
        if(!vis[i]){
            if(checkCycle(i, vis, dfsvis, adj))
                return true;
        }
    }
    return false;
}