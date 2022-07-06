#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

vector<int> ans;

vector<int> Kdistance(struct Node *root, int k)
{
    if(!root || k < 0)
        return ans;
    ans.push_back(root->data);
    Kdistance(root->left, k-1);
    Kdistance(root->right, k-1);
}