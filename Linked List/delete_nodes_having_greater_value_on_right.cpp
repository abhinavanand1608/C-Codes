#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* compute(Node* head){
    head = reverse(head);
    Node* cur = head;
    int ma = head->data;
    Node* prev = head;
    head = head->next;
    while(head){
        if(head->data >= ma){
            ma = head->data;
            prev = head;
            head = head->next;
        }
        else{
            prev->next = head->next;
            head = prev->next;
        }
    }
    head = reverse(cur);
    return head;
}