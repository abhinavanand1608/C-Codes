#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data;
        Node* prev = NULL;
        Node* next = NULL;
    }
};

Node* reverseDLLingroups(Node* head, int k){
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int i = 0;
    while(i < k and curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        i++; 
    }
    if(next != NULL)
        head->next = reverseDLLingroups(next,k);
    return prev;
}