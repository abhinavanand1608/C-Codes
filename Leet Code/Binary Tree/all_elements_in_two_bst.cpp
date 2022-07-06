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

void inorder(Node* p, vector<int> &v){
    if(!p) return;
    inorder(p->left, v);
    v.push_back(p->data);
    inorder(p->right, v);
}


vector<int> allElememts(Node* root1, Node* root2){
    vector<int> ans, inorder1, inorder2;
    inorder(root1, inorder1);
    inorder(root2, inorder2);

    int l=0, r=0;
    while(l < inorder1.size() and r < inorder2.size()){
        if(inorder1[l] < inorder2[r]){
            ans.push_back(inorder1[l++]);
        }
        else{
            ans.push_back(inorder2[r++]);
        }
    }
    while(l < inorder1.size()){
        ans.push_back(inorder1[l++]);
    }
    while(r < inorder2.size()){
        ans.push_back(inorder2[r++]);
    }
    return ans;
}