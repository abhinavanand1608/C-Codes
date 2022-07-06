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


bool isSameTree(TreeNode* p, TreeNode* q) {
    if(!p and !q) return true;
    if(!p or !q) return false;

    if(p->val == q->val){
        if(isSameTree(p->left, q->left) and isSameTree(p->right, q->right)) return true;
    }
    return false;
}