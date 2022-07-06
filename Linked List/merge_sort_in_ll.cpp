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

void MergeSorting(Node** head){
    Node* cur = *head;
    Node* first;
    Node* second;
    if(!cur or !cur->next) return;

    FindMiddle(cur, &first, &second);
    MergeSorting(&first);
    MergeSorting(&second);
    *head = MergeBoth(first,second);
}

Node* MergeBoth(Node* first, Node* second){
    Node* answer = NULL;
    if(!first)
        return second;
    else if(!second)
        return first;
    
    if(first->data <= second->data){
        answer = first;
        answer->next = MergeBoth(first->next, second);
    }
    else{
        answer = second;
        answer->next = MergeBoth(first,second->next);
    }
    return answer;
}

void FindMiddle(Node* cur, Node ** first, Node** second){
    Node* fast;
    Node* slow;
    slow = cur;
    fast = cur->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        *first = cur;
        *second = slow->next;
        slow->next = NULL;
    }
}