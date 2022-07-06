#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int ma = 0;
int LargestSum(Node* root){
    if(!root) return 0;
    int l = LargestSum(root->left);
    int r = LargestSum(root->right);
    ma = max(ma,l+r+root->data);
    return ma;
}