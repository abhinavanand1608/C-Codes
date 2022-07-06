#include<bits/stdc++.h>
using namespace std;

void interleave(queue<int> &q){
    int n = 4;
    stack<int> s;
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
    while(!s.empty()){
        q.push(s.top());
        q.pop();
        q.push(q.front());
        q.pop();
    }
}