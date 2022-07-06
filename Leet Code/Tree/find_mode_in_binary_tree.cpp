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
unordered_map<int,int> m;
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    m[root->val]++;
    inorder(root->right);
}

vector<int> findMode(TreeNode* root) {
    vector<int> v;
        inorder(root);
        int max1=0;
        for(auto i:m)
            max1=max(max1,i.second);
        for(auto i:m)
        {
            if(i.second==max1)
                v.push_back(i.first);
        }
        return v;
}