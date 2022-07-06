#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[], int v, int src){
    int dist[v];
    for(int i=0;i<v;i++) dist[i] = INT_MAX;
    queue<int> q;

    q.push(src);
    dist[src] = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it:adj[node]){
            if(dist[node] + 1 < dist[it]){
                dist[it] = dist[node]+1;
                q.push(it);
            }
        }
    }
    for(int i=0;i<v;i++) cout<<dist[i]<<" ";
}