#include<bits/stdc++.h>
using namespace std;

bool cycleDetect(int v, vector<int> adj[]){
    vector<int> indegree(v,0);
    queue<int> q;
    for(int i=0;i<v;i++){
        for(auto it:adj[i])
            indegree[i]++;
    }

    for(int i=0;i<v;i++){
        if(indegree[i] == 0)
            q.push(i);
    }
    int cnt=0;
    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cnt++;
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0)
                q.push(it);
        }
    }
    if(cnt == v) return false;
    return true;
}