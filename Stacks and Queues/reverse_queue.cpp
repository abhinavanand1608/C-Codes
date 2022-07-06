//Without recursion

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    stack<int> q2;

    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        q1.push(x);
    }

    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    while(!q2.empty()){
        int num = q2.top();
        q2.pop();
        cout<<num<<" ";
    }
}

//With Recursion

void recursion(queue<int> &q){
    if(q.size()==0)
        return;
    else{
        int front = q.front();
        q.pop();
        recursion(q);
        q.push(front);
    }
}