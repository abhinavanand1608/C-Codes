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
int ans = 0;

void dfs(Node* root){
    if(!root) return;
    if(root->data % 2 == 0){
        if(root->left != NULL){
            if(root->left->left != NULL)
                ans += root->left->left->data;
            if(root->left->right != NULL)
                ans += root->left->right->data;
        }
        if(root->right != NULL){
            if(root->right->left != NULL) 
                ans += root->right->left->data;
            if(root->right->right != NULL)
                ans += root->right->right->data;
        }
    }
    dfs(root->left);
    dfs(root->right);
}

int sumEvenValueGP(Node* root){
    dfs(root);
    return ans;
}