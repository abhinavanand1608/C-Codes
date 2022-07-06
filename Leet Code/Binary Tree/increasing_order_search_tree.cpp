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

vector<Node*> v;
void inorder(Node* root){
    if(root != NULL){
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
}

Node* increasingtree(Node* root){
    inorder(root);
    for(int i=0;i<v.size()-1;i++){
        v[i]->left = NULL;
        v[i]->right = v[i+1];
    }
    v[v.size()-1]->left = NULL;
    v[v.size()-1]->right = NULL;
    return v[0];
}