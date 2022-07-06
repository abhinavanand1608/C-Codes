#include<bits/stdc++.h>
using namespace std;

int timer = 1;
vector<int> inTime;
vector<int> outTime;

void resize(int n){
    inTime.resize(n+1);
    outTime.resize(n+1);
}

void dfs(int src, int par, vector<int> adj[]){
    inTime[src] = timer++;
    for(auto it:adj[src]){
        if(it != par)
            dfs(it, src,adj);
    }
    outTime[src] = timer++;
}

bool check(int x, int y){
    if(inTime[x] > inTime[y] and outTime[x] < outTime[y])
        return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int> adj[n+1];
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,0,adj);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int type,x,y;
        cin>>type>>x>>y;
        if(!check(x,y) and !check(y,x)){
            cout<<"No\n";
            continue;
        }
        if(type == 0){
            if(check(y,x))
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        if(type == 1)
            if(check(x,y))
                cout<<"Yes\n";
            else
                cout<<"No\n";
    }
}    