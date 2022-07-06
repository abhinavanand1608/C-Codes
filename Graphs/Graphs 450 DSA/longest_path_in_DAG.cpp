#include<bits/stdc++.h>
using namespace std;

void findTopoSort(int node, int vis[], stack<int> &st, vector<pair<int,int>> adj[]){
    vis[node] = 1;
    for(auto it:adj[node]){
        findTopoSort(it.first,vis,st,adj);
    }
    st.push(node);
}


void shortestPath(int src, int N, vector<pair<int,int>> adj[]){
    int vis[N] = {0};
    stack<int> st;
    for(int i=0;i<N;i++){
        if(!vis[i])
            findTopoSort(i,vis,st,adj);
    }
    int dist[N];
    for(int i=0;i<N;i++)
        dist[i] = INT_MAX;
    dist[src] = 0;

    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(dist[node] != INT_MAX){
            for(auto it:adj[node]){
                if(dist[node] + it.second > dist[it.first])
                    dist[it.first] = dist[node] + it.second;
            }
        }
    }
    for(int i=0;i<N;i++){
        (dist[i] == INT_MAX)?cout<<"INF":cout<<dist[i]<<" ";
    }
}



int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n];
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
    }
    shortestPath(0,n,adj);
}