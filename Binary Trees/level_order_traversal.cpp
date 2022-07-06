#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> levelOrderTraversal(Node* root){
    vector<int> res;
    if(!root) return res;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* t = q.front();
        res.push_back(t->data);
        if(t->left) q.push(t->left);
        if(t->right) q.push(t->right);
        q.pop();
    }
    return res;
}