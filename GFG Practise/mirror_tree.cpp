#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

void mirror(Node* node){
    if(!node) return;
    mirror(node->left);
    mirror(node->right);

    Node* temp = node->left;
    node->left = node->right;
    node->right = temp;

}