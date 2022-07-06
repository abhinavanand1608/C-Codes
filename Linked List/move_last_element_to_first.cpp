#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* moveElement(Node* head){
    Node* curr = head;
    Node* prev;
    while(curr != NULL){
        prev = curr;
        curr = curr->next;
    }
    curr->next = head;
    head = prev;
    prev->next = NULL;
};