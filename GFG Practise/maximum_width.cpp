#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int widthofBT(Node* root){
    if(!root) return 0;

    int ans = 0;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        int sz = q.size();
        int mmin = q.front().second;
        int first,last;
        for(int i=0;i<sz;i++){
            int fmin = q.front().second - mmin;
            Node* node = q.front().first;
            q.pop();
            if(i == 0) first = fmin;
            if(i == sz - 1) last = fmin;
            if(node->left)
                q.push({node->left, 2*fmin + 1});
            if(node->right)
                q.push({node->right, 2*fmin + 2});
        }
        ans = max(ans, last - first + 1);
    }
    return ans;
}