#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> diagnol(Node* root){
    queue<Node*> q;
    vector<int> ans;
    if(!root) return ans;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        while(temp){
            if(temp->left) q.push(t->left);
            ans.push_back(temp->data);
            temp = temp->right;
        }
    }
    return ans;
}