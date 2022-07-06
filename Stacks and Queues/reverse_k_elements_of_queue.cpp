#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k;
    queue<int> q;
    stack<int> s;

    for(int i=0;i<n;i++){
        cin>>x;
        q.push(x);
    }
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        int num = q.front();
        cout<<num<<" ";
        q.pop();
    }
}