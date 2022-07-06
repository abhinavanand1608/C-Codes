#include<bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int V, vector<int> adj[]){
    vector<int> bfs;
    vector<int> vis(V+1, 0);

    queue<int> q;
    for(int i=1;i<=V;i++){
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
    }
    return bfs;
}