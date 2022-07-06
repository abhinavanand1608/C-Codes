#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

void maxDiffUtil(Node* root, int k, int &min_diff, int &min_diff_key){
    if(!root) return;
    if(min_diff > abs(k - root->data)){
        min_diff = abs(k - root->data);
        min_diff_key = root->data;
    }

    if(k < root->data){
        maxDiffUtil(root->left, k, min_diff, min_diff_key);
    }
    else
        maxDiffUtil(root->right, k, min_diff, min_diff_key);
}

int minDiff(Node *root, int K)
{
    if(!root) return 0;
    int min_diff = INT_MAX;
    int min_diff_key = -1;

    maxDiffUtil(root, K, min_diff, min_diff_key);
    return min_diff;
}