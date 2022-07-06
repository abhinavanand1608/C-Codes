#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int heightOfTree(Node* root){
    if(!root) return 0;
    int x = heightOfTree(root->left);
    int y = heightOfTree(root->right);
    return (max(x,y)+1);
}