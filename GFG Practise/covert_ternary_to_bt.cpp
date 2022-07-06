#include<bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
    Node(char s){
        data = s;
        left = NULL;
        right = NULL;
    }
};

int i=0;

Node* convertExpression(string s, int i){
    Node* root = new Node(s[i]);

    if(i == s.length()-1) return root;

    i++;

    if(s[i] == '?'){
        i++;
        root->left = convertExpression(s, i);
        i++;
        root->right = convertExpression(s, i);

        return root;

    }
    else
        return root;
}

