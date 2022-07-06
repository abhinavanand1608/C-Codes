#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

Node* reverseDLL(Node* head){
    Node* curr = head;
    if(curr == NULL or curr->next == NULL)
        return head;
    while(curr->next != NULL)
        curr = curr->next;
    head = curr;
    curr->next = curr->prev;
    curr->prev = NULL;
    curr = curr->next;
    while(curr->prev != NULL){
        Node* temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;
        curr = curr->next;
    }
    curr->prev = curr->next;
    curr->next = NULL;
    return head;
}