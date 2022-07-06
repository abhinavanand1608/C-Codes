#include<bits/stdc++.h>
using namespace std;

bool checkForCycle(int s, int v, vector<int> adj[], vector<int> &visited){
    queue<pair<int,int>> q;
    visited[s] = true;
    q.push({s, -1});

    while(!q.empty()){
        int node = q.front().first;
        int par = q.front().second;
        q.pop();

        for(auto it:adj[node]){
            if(!visited[it]){
                visited[it] = true;
                q.push({it, node});
            }
            else if(par != it)
                return true;
        }
    }
    return false;
}

bool isCycle(int v, vector<int> adj[]){
    vector<int> vis(v+1,0);
    for(int i=1;i<=v;i++){
        if(!vis[i])
            if(checkForCycle(i, v, adj, vis)) return true;
    }
    return false;
}