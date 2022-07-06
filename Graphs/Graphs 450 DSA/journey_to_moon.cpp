#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], int counter){
    vis[node] = 1;
    counter++;
    for(auto it:adj[node]){
        if(!vis[it])
            dfs(it, vis, adj, counter);
    }
}


int main(){
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> solution;
    vector<int> vis(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
            int counter = 0;
            dfs(i,vis,adj,counter);
            solution.push_back(counter);
        }
    }
    int val = (v*(v-1))/2;
    for(int i=0;i<solution.size();i++){
        int x = (solution[i] * (solution[i] - 1))/2;
        val = val - x;
    }
    cout<<val<<endl;
}