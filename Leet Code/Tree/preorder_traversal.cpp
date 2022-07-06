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
// vector<int> preorderTraversal(TreeNode* root) {
//     if(!root) return ans;
//     ans.push_back(root->val);
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);

//     return ans;
// }

// 2 Method:-(Not correct)
// vector<int> preOrderTraversal(TreeNode* root) {
//     vector<int> ans;
//     if(root == NULL) return ans;
//     queue<TreeNode*> q1, q2;
//     q1.push(root);
//     while(!q1.empty()){
//         root = q1.front();
//         q1.pop();
//         q2.push(root);
//         if(root->right) q1.push(root->left);
//         if(root->left) q1.push(root->right);
//     } 
//     while(!q2.empty()){
//         ans.push_back(q2.front()->val);
//         q2.pop();
//     } 
//     return ans;  
// }

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preorder;
    if(root == NULL){return preorder;}
    
    stack<TreeNode*> stk ; stk.push(root);
    while(!stk.empty())
    {   
        TreeNode* node = stk.top() ; stk.pop() ; 
        preorder.push_back(node->val) ;
        if(node->right){stk.push(node->right) ;}
        if(node->left){stk.push(node->left) ;}
    }
    
    return preorder ; 
}
