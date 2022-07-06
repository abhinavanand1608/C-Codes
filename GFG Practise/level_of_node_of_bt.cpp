#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int findlevel(struct Node* root, int level, int target){
    if(!root) return 0;
    if(root->data == target)
        return level;
    int downlevel = findlevel(root->left, level+1, target);

    if(downlevel != 0)
        return downlevel;
    
    downlevel = findlevel(root->right, level+1, target);

    return downlevel;
    
}
// function should return level of the target node
int getLevel(struct Node *node, int data)
{
    return findlevel(node, 1, data);
}