#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int height(Node* root){
    if(!root) return -1;
        // int left = height(root->left);
        // int right = height(root->right);
        
        // if(left > right)
        //     return 1 + left;
        // else return 1 + right;
    if (root == NULL)
        return -1;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = height(root->left);
        int rDepth = height(root->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}

bool isBalanced(Node *root)
{
    if(!root) return true;
    int left = height(root->left);
    int right = height(root->right);

    if(abs(left - right) <= 1 and isBalanced(root->left) and isBalanced(root->right))
        return true;
    return false;
}