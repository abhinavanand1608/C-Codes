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

int sum(TreeNode* root){
    if(!root) return 0;
    int l = sum(root->left);
    int r = sum(root->right);
    ans += abs(l-r);
    return (l+r+root->val);
}

int findTilt(TreeNode* root) {
    sum(root);
    return ans;
}