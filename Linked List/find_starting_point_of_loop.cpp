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

struct Node* findfirstLoopNode(Node* head){
    Node* low = head;
    Node* high = head;

    while(low!=NULL and high!=NULL and high->next!=NULL){
        low = low->next;
        high = high->next->next;
        if(low == high)
            break;
    }

    if(low!=high) return NULL;

    low = head;
    while(low!=high){
        low = low->next;
        high = high->next;
    }
    return low;
}