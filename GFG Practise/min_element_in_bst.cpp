#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};


int minValue(Node* root) {
    Node* curr = root;
    while(curr->left != NULL)
        curr = curr->left;

    return curr->data;

}