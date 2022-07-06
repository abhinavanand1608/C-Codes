#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

Node* rotateByn(Node* head, int k){
    if(k == 0)
        return head;
    Node* curr = head;
    int l = 1;
    while(l < k and curr != NULL){
        curr = curr->next;
        l++;
    }
    Node* NthNode = curr;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next = head;
    head->prev = curr;
    head = NthNode->next;
    head->prev = NULL;
    NthNode->next = NULL;
}