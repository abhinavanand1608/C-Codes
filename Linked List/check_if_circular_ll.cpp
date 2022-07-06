#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next = NULL;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

bool CLL(Node* head){
    Node* curr = head;
    if(curr->next == NULL)
        return false;
    curr = curr->next;
    while(curr != NULL){
        curr = curr->next;
        if(curr == head)
            break;
    }
    if(curr == head)
        return true;
    else
        return false;
}