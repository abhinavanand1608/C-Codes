#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
int deeputil(Node* root, int level){
    if(!root) return 0;
    if(!root->left and !root->right and level & 1)
        return level;
    return max(deeputil(root->left, level+1), deeputil(root->right, level+1));
}

int depthOfOddLeaf(Node *root)
{
    if(!root) return 0;
    return deeputil(root, 1);
}