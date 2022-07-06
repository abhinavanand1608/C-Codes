#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int maxNodeLevel(Node *root)
{
    if(!root) return -1;
    queue<Node*> q;
    q.push(root);
    int level = 0;
    int ans = 0;
    int maxi = INT_MIN;
    while(!q.empty()){
        int sz = q.size();
        if(sz > maxi){
            maxi = sz;
            ans = level;
        }
        while(sz--){
            Node* temp = q.front();
            if(temp->left)
                q.push(temp->left);
            else if(temp->right)
                q.push(temp->right);
        }
        level++;
    }
    return ans;
}