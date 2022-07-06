#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
int maxi = INT_MIN;
int mini = INT_MAX;
int findMax(Node *root)
{
    if(!root) return 0;
    if(root->data > maxi)
        maxi = root->data;
    findMax(root->left);
    findMax(root->right);

    return maxi;
}
int findMin(Node *root)
{
    if(!root) return 0;
    if(root->data < mini)
        mini = root->data;
    findMin(root->left);
    findMin(root->right);

    return mini;
}