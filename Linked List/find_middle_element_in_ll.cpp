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

Node* middleElement(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL || fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}