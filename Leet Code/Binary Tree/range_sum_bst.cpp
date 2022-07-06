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

int sum = 0;
int rangeSum(Node* root){
    if(!root) return 0;
    rangeSum(root->left);
    if(root->data >= 7 and root->data <= 15)
        sum += root->data;
    rangeSum(root->right);
    return sum;
}