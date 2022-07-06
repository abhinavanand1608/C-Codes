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

int sumTree(Node* head){
    if(!head) return 0;
    int a = sumTree(head->left);
    int b = sumTree(head->right);
    int x = head->data;
    head->data = a + b;
    return a+b+x; 
}

void toSumTree(Node* node){
    sumTree(node);
}