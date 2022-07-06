#include<bits/stdc++.h>
using namespace std;

void push(queue<int> q1,queue<int> q2,int num)
{
    q1.push(num);
    while(!q2.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1,q2);
}

int pop(queue<int> q1, queue<int> q2){
    int ans;
    if(q2.empty())
        ans = -1;
    else{
        ans = q2.front();
        q2.pop();
    }
    return ans;
}