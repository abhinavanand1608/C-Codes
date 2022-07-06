#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    ListNode* next;
    ListNode(int val){
        data = val;
        next = NULL;
    }
};

ListNode* reverseList(ListNode* root){
    ListNode* prev = NULL;
    ListNode* curr = root;
    ListNode* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    root = prev;
    return root;
}

bool isPalindrome(ListNode* head){
    if(head == NULL || head->next == NULL) return true;
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    slow->next = reverseList(slow->next);
    slow = slow->next;
    
    while(slow != NULL){
        if(head->data != slow->data){
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    return true;
}