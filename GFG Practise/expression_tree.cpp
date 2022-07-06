#include<bits/stdc++.h>
using namespace std;

struct Node{
    string data;
    Node* left;
    Node* right;
};

int toInt(string s){
    int num = 0;
    if(s[0] != '-')
        for(int i=0;i<s.length();i++)
            num = num*10 + (int(s[i])-48);
    else{
        for(int i=1;i<s.length();i++){
            num = num*10 + (int(s[i])-48);
            num = num*-1;
        }
    }
    return num;
}

int evalTree(Node* root){
    if(!root) return 0;
    if(!root->left and !root->right)
        return toInt(root->data);
    int lval = evalTree(root->left);
    int rval = evalTree(root->right);
    if(root->data == "*")
        return lval * rval;
    else if(root->data == "+")
        return lval + rval;
    else if(root->data == "-")
        return lval - rval;
    else if(root->data == "/")
        return lval / rval;
    

}