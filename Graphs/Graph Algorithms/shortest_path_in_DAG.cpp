#include<bits/stdc++.h>
using namespace std;

void findTopoSort(int node, int vis[], stack<int> &st, vector<pair<int,int>> adj[]){
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it.first]){
            findTopoSort(it.first, vis, st, adj);
        }
    }
    st.push(node);
}


void shortestPath(int src, int v, vector<pair<int,int>> adj[]){
    int vis[v] = {0};
    stack<int> st;
    for(int i=0;i<v;i++){
        if(!vis[i])
            findTopoSort(i, vis, st, adj);
    }
    int dist[v];
    for(int i=0;i<v;i++)
        dist[i] = INT_MAX;
    dist[src] = 0;

    while(!st.empty()){
        int node = st.top();
        st.pop();

        if(dist[node] != INT_MAX){
            for(auto it:adj[node]){
                if(dist[node] + it.second < dist[it.first])
                    dist[it.first] = dist[node] + it.second;
            }
        }
    }
}