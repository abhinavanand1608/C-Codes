#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(queue<int> q){
    vector<int> ans;
    int x = q.front();
    q.pop();
    reverse(q);
    ans.push_back(x);
    return ans;
}