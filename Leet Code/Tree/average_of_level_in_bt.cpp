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

vector<double> averageOfLevels(TreeNode* root) {
    double sum;
    vector<double> ans;
    queue<TreeNode*> q;
    if(!root) return ans;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=1;i<=n;i++){
            TreeNode* temp = q.front();
            q.pop();
            sum += temp->val;
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        ans.push_back(sum/n);
        sum=0;
    } 
    return ans;
}