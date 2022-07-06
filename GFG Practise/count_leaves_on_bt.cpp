#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
int cnt = 0;
int countLeaves(Node* root){
    if(!root) return 0;
    if(!root->left and !root->right)
        cnt++;
    countLeaves(root->left);
    countLeaves(root->right);

    return cnt;
}