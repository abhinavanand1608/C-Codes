#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
int cnt = 0;
int countNonLeafNodes(Node* root) {
    if(!root) return ;
    if(root->left and root->right)
        cnt++;
    if(!root->left and !root->right)
        return 0;
    return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
}