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

Node* deletefrombeg(Node* tail, int data){
    Node* curr = tail->next;
    tail = curr->next;
    free(curr);
}

Node* deletefromend(Node* tail, int data){
    Node* curr = tail->next;
    Node* prev = tail->next;
    while(curr->next != tail->next){
        prev = curr;
        curr = curr->next;
    }
    prev->next = tail->next;
    tail = prev;
    free(curr);
}

int getlength(Node* tail){
    int l;
    Node* curr = tail->next;
    while(curr->next != tail->next){
        curr = curr->next;
        l++;
    }
    return l;
}

Node* delfrompos(Node* tail, int data, int pos){
    Node* curr = tail->next;
    Node* prev = tail->next;
    int i = 1;
    int l = getlength(tail);
    if(pos < 1 || pos > l)
        return NULL;
    else{
        while(i < pos - 1){
            curr = curr->next;
            i++;
        }
        prev = curr->next;
        curr->next = prev->next;
        free(prev);
    }
}