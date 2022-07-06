#include<bits/stdc++.h>
using namespace std;

void findTopoSort(int node, vector<int> adj[], vector<int> &vis, stack<int> st){
    vis[node] = 1;
    
    for(auto it:adj[node]){
        if(!vis[it]){
            findTopoSort(it, adj, vis, st);
        }
    }
    st.push(node);
}


vector<int> topoSort(int v, vector<int> adj[]){
    vector<int> vis(v,0);
    stack<int> st;

    for(int i=0;i<v;i++){
        findTopoSort(i, adj, vis, st);
    }
    vector<int> topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}