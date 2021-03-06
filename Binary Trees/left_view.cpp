#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> leftView(Node* root){
    vector<int> ans;
    queue<Node*> q;
    if(!root) return ans;
    q.push(root);

    while(!q.empty()){
        int sz = q.size();
        ans.push_back(q.front()->data);
        while(sz--){
            Node* t = q.front();
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
    }
    return ans;
}