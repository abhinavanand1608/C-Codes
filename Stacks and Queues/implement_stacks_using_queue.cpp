//Implement Stack Using double queues.
#include<bits/stdc++.h>
using namespace std;

queue<int> q1;
queue<int> q2;
void push(int x){
    q2.push(x);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1,q2);
}

void pop(){
    q1.pop();
}

void top(){
    q1.front();
}


//Implement Stack using single queue

queue<int> q;
void push1(int x){
    q.push(x);
    for(int i=0;i<q.size()-1;i++){
        q.push(q.front());
        q.pop();
    }
}