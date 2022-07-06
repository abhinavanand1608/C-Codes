#include<bits/stdc++.h>
using namespace std;

struct Node{
    struct Node* next;
    struct Node* prev;
    int data;
    Node(int x){
        data = x;
        next = prev = NULL;
    }
};

Node* dummy = new Node(-1);
Node* head = dummy;
Node* mid = dummy;
int cnt = 0;

void push(int data){
    Node* curr = new Node(data);
    curr->prev = NULL;
    curr->next = head;
    cnt++;
    head->prev = curr;
    head = curr;
    if(cnt == 1)
        mid = curr;
    else if(cnt%2 == 0)
        mid = mid->prev;
}

int pop(){
    if(cnt == 0)
        return -1;
    Node* temp = head;
    int x = head->data;
    head = head->next;
    if(head != NULL)
        head->prev = NULL;
    cnt--;
    if(cnt & 1)
        mid = mid->next;
    free(temp);
    return x;
}

int middle(){
    if(cnt == 0)
        return -1;
    return mid->data;
}