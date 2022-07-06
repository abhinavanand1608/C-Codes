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

    while(fast or fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void splitList(Node* head, Node** head1_ref, Node** head2_ref){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != head and (fast->next)!= head){
        slow = slow->next;
        fast = fast->next->next;
    }
    *head1_ref = head;
    *head2_ref = slow->next;
    slow->next = *head1_ref;
    Node* cur = *head2_ref;
    while(cur->next != head)
        cur = cur->next;
    cur->next = *head2_ref;
}