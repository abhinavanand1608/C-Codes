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

int height(Node* root){
    if(!root) return 0;
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}