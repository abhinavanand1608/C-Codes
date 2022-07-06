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
int sum = 0;
int maxdepth(Node* root){
    if(!root) return 0;
    int l = maxdepth(root->left);
    int r = maxdepth(root->right);

    return max(l,r)+1;
}

void deepsum(Node* root, int node_dep){
    if(root == NULL)
        return;
    if(!root->left and !root->right and node_dep == h)
        sum += root->data;
    deepsum(root->left, node_dep+1);
    deepsum(root->right, node_dep+1);
}

int deepestleaves(Node* root){
    h = maxdepth(root);
    deepsum(root, 1);
    return sum;
}