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

int height(Node* root){
    if(!root) return 0;
    int x = height(root->left);
    int y = height(root->right);
    return(max(x,y)+1);
}

int diameter(Node* root){
    if(!root) return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);

    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);

    int fd = max(lheight + rheight + 1, max(ldiameter, rdiameter));
    return fd;
}