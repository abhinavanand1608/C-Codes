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

Node* reverse1(Node* head){
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
}

struct Node* addTwoLists(struct Node* first, struct Node* second){
    first = reverse1(first);
    second = reverse1(second);
    int c = 0;
    int s = 0;
    Node* temp;
    Node* res = NULL;
    Node* curr = NULL;
    while(first != NULL || second != NULL){
        s = c + (first?first->data:0) + (second?second->data:0);
        c = (s>=10)?1:0;
        s = s%10;
        temp = new Node(s);
        if(res == NULL) res = temp;
        else curr->next = temp;
        curr = temp;
        if(first) first = first->next;
        if(second) second = second->next;
    }
    if(c>0){
        temp = new Node(c);
        curr->next = temp;
        curr = temp;
    }
    res = reverse1(res);
    return res;
}