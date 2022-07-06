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


void get_order(Node* root, vector<int> &v){
    if(root == nullptr) return;
    for(int i=0;i<root->children.size();i++)
        get_order(root->children[i], v);
    v.push_back(root->val);
}

vector<int> postorder(Node* root){
    vector<int> v;
    get_order(root, v);

    return v;
}