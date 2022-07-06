#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

void preoder(Node* root, vector<int> &v) {
    v.push_back(root->val);
    for(auto i:root->children)
        preoder(i,v);
}

vector<int> preorder(Node* root){
    if(!root) return {};
    vector<int> v;
    preoder(root, v);
    return v;
}