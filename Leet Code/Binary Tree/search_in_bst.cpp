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

Node* searchBST(Node* root, int val){
    if(root == NULL)
        return NULL;
    if(root->data == val)
        return root;
    if(root->data < val)
        return searchBST(root->right, val);
    if(root->data > val)
        return searchBST(root->left, val);
    return NULL;
}