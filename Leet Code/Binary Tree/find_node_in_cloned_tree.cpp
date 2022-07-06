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
Node* ans = NULL;
Node* inorder(Node* cloned, int t){
    if(!cloned) return NULL;
    inorder(cloned->left,t);
    if(t == cloned->data)
        return cloned;
    inorder(cloned->right, t);
}

Node* getTarget(Node* original, Node* cloned, Node* target){
    inorder(cloned, target->data);
    return ans;
}