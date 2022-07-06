#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* deleteDup(Node* root){
    Node* head = root;
    if(!head) return NULL;
    while(head->next != NULL){
        if(head->data == head->next->data)
            head->next = head->next->next;
        else
            head = head->next;
    }
    return root;
}