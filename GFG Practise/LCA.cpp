#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* LCA(Node* root, int n1, int n2){
    if(!root) return NULL;
    
    if(root->data == n1 or root->data == n2)
        return root;
    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);

    if(left and right) return root;
    else left?left:right;
    
}