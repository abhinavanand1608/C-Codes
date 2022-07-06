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

int ans = 0;

int sumOfLeftLeaves(TreeNode* root) {
    if(!root) return 0;
    if(root->left != NULL and root->left->left == NULL and root->left->right == NULL)
        ans += root->left->val;
    sumOfLeftLeaves(root->left);
    sumOfLeftLeaves(root->right);

    return ans;
}