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

// 1 Method:-

// vector<int> ans;
// vector<int> postorderTraversal(TreeNode* root) {
//     if(!root) return ans;
//     postorderTraversal(root->left);
//     postorderTraversal(root->right);
//     ans.push_back(root->val);
//     return ans;
// }

// 2 Method:-

vector<int> postOrderTraversal(TreeNode* root){
    vector<int> ans;
    if(root == NULL) return ans;
    stack<TreeNode*> s1,s2;
    s1.push(root);
    while(!s1.empty()){
        root = s1.top();
        s1.pop();
        s2.push(root);
        if(root->left) s1.push(root->left);
        if(root->right) s1.push(root->right);
    }
    while(!s2.empty()){
        ans.push_back(s2.top()->val);
        s2.pop();
    }
    return ans;
}