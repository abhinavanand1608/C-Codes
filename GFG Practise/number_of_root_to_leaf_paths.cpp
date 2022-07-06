#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
void pathCountUtil(Node* root, unordered_map<int,int> &m, int path_len){
    if(!root) return;

    if(!root->left and !root->right){
        m[path_len]++;
        return;
    }
    pathCountUtil(root->left, m, path_len+1);
    pathCountUtil(root->right, m, path_len+1);
}

void pathCounts(Node* root){
    if(!root) return;

    unordered_map<int,int> m;

    pathCountUtil(root, m, 1);

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->second<<" "<<it->first;
    }
}