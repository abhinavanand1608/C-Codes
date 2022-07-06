#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int countSubtreewithsumX(Node*root, int &count, int x){
    if(!root) return 0;
    int ls = countSubtreewithsumX(root->left, count, x);
    int rs = countSubtreewithsumX(root->right, count, x);

    int sum = ls + rs + root->data;

    if(sum == x)
        count++;
    return sum;
}

int countSubtreewithsumXutil(Node* root, int x){
    int count = 0;
    if(!root) return 0;
    int lc = countSubtreewithsumX(root->left, count, x);
    int rc = countSubtreewithsumX(root->right, count, x);

    if(lc + rc + root->data == x)
        count++;
    return count;
}