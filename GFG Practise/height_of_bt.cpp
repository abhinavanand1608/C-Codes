#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int height(struct Node* root){
    if(!root) return 0;
    int left = height(root->left);
    int right = height(root->right);

    if(left > right)
        return 1 + height(root->left);
    else return 1 + height(root->right);
}