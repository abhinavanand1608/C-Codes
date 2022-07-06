#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

void modifySum(Node* root, int &sum){
    if(!root) return;
    modifySum(root->right, sum);

    sum += root->data;
    root->data = sum;

    modifySum(root->left, sum);
}

Node* modify(Node *root)
{
    int sum = 0;
    if(!root) return NULL;
    modifySum(root, sum);

    return root;
}