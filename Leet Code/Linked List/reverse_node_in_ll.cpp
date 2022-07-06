#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = NULL;
    Node* temp = head;
    while(temp != NULL){
        curr = temp->next;
        temp->next = prev;
        prev = temp;
        temp = curr;
    }
    head = prev;
    return head;
}