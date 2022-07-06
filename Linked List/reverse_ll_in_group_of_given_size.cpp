#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

struct Node* reverse(struct Node* head, int k){
    Node* next = NULL;
    Node* prev = NULL;
    int c = 0;
    Node* current = head;
    while(current != NULL and c<k){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        c++;
    }
    if(next != NULL){
        head->next = reverse(next,k);
    }
    return prev;
}