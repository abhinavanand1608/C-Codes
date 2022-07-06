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
vector<int> ans;
int len;

int getMinimumDifference(TreeNode* root) {
    if(!root) return 0;
    getMinimumDifference(root->left);
    ans.push_back(root->val);
    getMinimumDifference(root->right);

    len = ans.size();
    int diff = INT_MAX;

    for(int i=0;i<len-1;i++){
        diff = min(diff, ans[i+1]-ans[i]);
    }
    return diff;
}