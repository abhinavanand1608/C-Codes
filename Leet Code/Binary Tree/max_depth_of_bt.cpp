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
int h = 0;
int maxdepth(Node* root){
    if(!root) return 0;
    int l = maxdepth(root->left);
    int r = maxdepth(root->right);

    return max(l,r)+1;
}