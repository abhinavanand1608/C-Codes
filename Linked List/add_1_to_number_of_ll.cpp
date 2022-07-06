#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data;
        next = NULL;
    }
};

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = head;
        curr = next;
    }
    return prev;
};

Node* addOne(Node* head){
    head = reverse(head);
    bool f = true;
    Node* curr = head;
    while(curr != NULL and f == true){
        if(curr->next == NULL and curr->data == 9){
            curr->data = 1;
            Node* temp = new Node(0);
            temp->next = head;
            head = temp;
            curr = curr->next;
        }
        else if(curr->data == 9){
            curr->data = 0;
            curr = curr->next;
        }
        else{
            curr->data = curr->data + 1;
            curr = curr->next;
            f = false;
        }
    }
    head = reverse(head);
    return head;
}



