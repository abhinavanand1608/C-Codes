#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int fun(Node* root, int s){
    if(!root) return 0;
    if(!root->left and !root->right) return 2*s + root->data;
    return fun(root->left, 2*s + root->data) + fun(root->right, 2*s + root->data);
}

int sumTotal(Node* root){
    return fun(root, 0);
}