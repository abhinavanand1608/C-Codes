#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int isSumProperty(Node *root)
{
    int left=0, right=0;
    if(!root and root->left == NULL and root->right == NULL) return 1;
    if(root->left)
        left = root->left->data;
    if(root->right)
        right = root->right->data;
    
    if((root->data == left + right) and (isSumProperty(root->left) and isSumProperty(root->right)))
        return 1;
    else
        return 0;
}