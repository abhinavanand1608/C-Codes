#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

void mirror(Node* root){
    if(!root) return;
    Node* temp;
    mirror(root->left);
    mirror(root->right);
    temp = root->left;
    root->left = root->right;
    root->right = temp;
}

bool isStructure(Node* root1, Node* root2){
    if(!root1 and !root2) return true;
    if(root1 and root2 and isStructure(root1->left, root2->left) and isStructure(root1->right, root2->right))
        return true;
    return false;
}

bool IsFoldable(Node* root)
{
    if(!root) return true;

    mirror(root->left);

    bool res = isStructure(root->left, root->right);

    mirror(root->left);

    return res;
}