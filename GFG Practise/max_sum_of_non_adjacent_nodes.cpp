#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int sumofgrandchildren(Node* root, map<Node*, int> &mp){
    int sum = 0;
    if(root->left){
        sum += maxSum(root->left->left, mp) + maxSum(root->left->right, mp);
    }
    if(root->right){
        sum += maxSum(root->right->right, mp) + maxSum(root->right->left, mp);
    }
    return sum;
}

int maxSum(Node* root, vector<Node*, int> &mp){
    if(!root) return 0;
    if(mp.find(root)!=mp.end())
        return mp[root];
    int incl = root->data + sumofgrandchildren(root, mp);
    int excl = maxSum(root->left, mp) + maxSum(root->right, mp);

    mp[root] = max(incl, excl);
}