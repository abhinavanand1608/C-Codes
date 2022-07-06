#include<bits/stdc++.h>
using namespace std;

struct Node{
    string data;
    Node* left;
    Node* right;
};

Node* concatenate(Node* leftlist, Node* rightlist){
    if(!leftlist)
        return rightlist;
    if(!rightlist)
        return leftlist;

    Node* leftlast = leftlist->left;
    Node* rightlast = rightlist->right;

    leftlast->right = rightlast;
    rightlist->left = leftlast;

    leftlist->left = rightlast;

    rightlast->right = leftlist;

    return leftlist;
}


Node *bTreeToCList(Node *root)
{
    if(!root)
        return NULL;
    Node* left = bTreeToCList(root->left);
    Node* right = bTreeToCList(root->right);

    root->left = root->right = root;

    return concatenate(concatenate(left,root), right);
}