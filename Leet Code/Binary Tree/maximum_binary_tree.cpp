#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* constructMaxBT(vector<int> &nums){
    if(nums.empty())
        return NULL;
    auto it = max_element(nums.begin(), nums.end());

    Node* root = new Node(*it);
    vector<int> left(nums.begin(), it);
    vector<int> right(it+1, nums.end());

    root->left = constructMaxBT(left);
    root->right = constructMaxBT(right);
    return root;
}