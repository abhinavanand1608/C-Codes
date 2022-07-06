#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool helper(TreeNode* p, TreeNode* q)
{
    if(!p and !q) return true;
    if(!p or !q) return false;

    if(p->val == q->val) return helper(p->left, q->right) and helper(p->right, q->left);
    return false;
}

bool isSymetric(TreeNode* root){
    if(!root->left and !root->right) return true;
    return helper(root->left, root->right);
}