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

bool isSolve(TreeNode* root, TreeNode* sroot){
    if((!root and sroot) or (root and !sroot))
        return false;
    if(!root and !sroot)
        return true;
    if(root->val != sroot->val)
        return false;
    return (isSolve(root->left, sroot->left) and isSolve(root->right, sroot->right));
}

int height(TreeNode* root){
    if(!root) return 0;
    
    return max(height(root->left), height(root->right)) + 1;
}



bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if(!root) return false;

    if(root->val == subRoot->val and height(root) == height(subRoot)){
        if(isSolve(root, subRoot) == true)
            return true;
    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}