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

bool detectLoop(Node* head){
    if(!head) return false;

    unordered_map<Node*,int> m;
    while(head){
        if(!m[head]){
            m[head] = 1;
            head = head->next;
        }
        else return true;
    }
    return false;
}

//
bool detectLoop(Node* head){
    if(!head) return false;

    Node* low = head;
    Node* high = head;

    while(high != NULL and high->next != NULL){
        low = low->next;
        high = high->next->next;
        if(low == high){
            return true;
        }
    }
    return false;
}