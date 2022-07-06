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

vector<string> ans;

void fun(TreeNode* root, string s){
    if(!root->left and !root->right) ans.push_back(s);
    if(root->left) fun(root->left, s+"->"+to_string(root->left->val));
    if(root->right) fun(root->right, s+"->"+to_string(root->right->val));
}

vector<string> binaryTreePaths(TreeNode* root) {
    string s = "";
    s += to_string(root->val);
    fun(root, s);
    return ans;
}