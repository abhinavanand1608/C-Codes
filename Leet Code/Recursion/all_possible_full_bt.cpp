#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<TreeNode*> allPossibleFBT(int n){
    if(n == 0) return {0};
    if(n == 1) return {new TreeNode(0)};
    vector<TreeNode*> ans;
    for(int i=1;i<n-1;i++){
        vector<TreeNode*> left = allPossibleFBT(i);
        vector<TreeNode*> right = allPossibleFBT(n-i-1);
        for(int i=0;i<left.size();i++){
            for(int j=0;j<right.size();j++){
                TreeNode* temp = new TreeNode(0);
                temp->left = left[i];
                temp->right = right[j];
                ans.push_back(temp);
            }
        }
    }
    return ans;
}