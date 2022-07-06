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
// vector<int> ans1;
// vector<int> ans2;
// vector<int> preorder1(TreeNode* root1){
//     if(root1 == NULL)
//         return ans1;
//     else{
//         if(root1->left == NULL and root1->right == NULL)
//             ans1.push_back(root1->val);
//         preorder1(root1->left);
//         preorder1(root1->right);
//     }
//     return ans1;
// }

// vector<int> preorder2(TreeNode* root2){
//     if(root2 == NULL)
//         return ans2;
//     else{
//         if(root2->left == NULL and root2->right == NULL)
//             ans1.push_back(root2->val);
//         preorder1(root2->left);
//         preorder1(root2->right);
//     }
//     return ans2;
// }

// bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//     vector<int> x = preorder1(root1);
//     vector<int> y = preorder2(root2);
//     if(x == y) return true;
//     else return false;       
// }

bool leafSimilar(TreeNode* root1, TreeNode* root2){
    vector<int> v1;
    vector<int> v2;
    stack<TreeNode*> st;
    st.push(root1);
    while(!st.empty()){
        TreeNode* t = st.top();
        st.pop();
        if(t->right != NULL)
            st.push(t->right);
        if(t->left != NULL)
            st.push(t->left);
        if(t->left == NULL and t->right == NULL)
            v1.push_back(t->val);
    }
    st.push(root2);
    while(!st.empty()){
        TreeNode* t = st.top();
        st.pop();
        if(t->right != NULL)
            st.push(t->right);
        if(t->left != NULL)
            st.push(t->left);
        if(t->left == NULL and t->right == NULL)
            v2.push_back(t->val);
    }
    if(v1 == v2)
        return true;
}
