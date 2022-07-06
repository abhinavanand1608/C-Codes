#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    queue<int> q;
    stack<int> s;

    for(int i=0;i<n;i++){
        cin>>x;
        q.push(x);
    }

    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }

    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }

    while(!q.empty() and !s.empty()){
        cout<<s.top()<<" ";
        cout<<q.front()<<" ";
        q.pop();
        s.pop();
    }
}