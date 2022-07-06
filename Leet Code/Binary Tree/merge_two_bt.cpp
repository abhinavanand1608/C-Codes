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

Node* mergeTrees(Node* root1, Node* root2) {
    if(!root1 and !root2)
            return nullptr;
        
        if(!root1 and root2 != NULL)
            return root2;
        if(!root2 and root1 != NULL)
            return root1;
        
        root1->data += root2->data;
        root1->left = mergeTrees(root1->left, root2->left);
        root1->right = mergeTrees(root1->right, root2->right);
        
        return root1;
}