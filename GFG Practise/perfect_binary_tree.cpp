#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};


int findDepth(Node* root){
    int d = 0;
    while(root != NULL){
        d++;
        root = root->left;
    }
    return d;
}
bool isPerfect1(Node *root, int d, int level = 0)
{
    if(!root) return true;
    if(!root->left and !root->right)
        return d == level + 1;
    if(!root->left || !root->right)
        return false;
    return isPerfect1(root->left, d, level+1) && isPerfect1(root->right, d, level+1);
}

bool isPerfect(Node* root){
    int d = findDepth(root);
    return isPerfect1(root, d);
}