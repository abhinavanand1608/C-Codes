#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int height(Node* root){
    if(!root) return 0;
    int left = height(root->left);
    int right = height(root->right);

    return max(left, right) + 1;
}

int diameter(struct Node* root) {
    if(!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    int ld = diameter(root->left);
    int rd = diameter(root->right);

    return max(lh + rh + 1, max(ld, rd));
}
