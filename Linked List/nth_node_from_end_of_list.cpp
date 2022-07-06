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

int getLength(Node* head){
    int c = 0;
    Node* curr = head;
    while(curr){
        curr = curr->next;
        c++;
    }
    return c;
}

int getNthFromLast(Node* head, int n){
    Node* curr = head;
    int k = getLength(head) - n + 1;
    int cnt = 1;
    while(cnt <= k){
        cnt++;
        curr = curr->next;
        if(cnt == k)
            return curr->data;
    }
}