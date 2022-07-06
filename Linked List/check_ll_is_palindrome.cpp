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

bool checkPalindrome(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* prev = NULL;
    Node* next;
    Node* cur = slow;
    while (cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    fast = head;
    while(prev != NULL){
        if(fast->data != prev->data)
            return false;
        fast = fast->next;
        prev = prev->next;
    }
    return true;
}