#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int data){
        val = data;
        next = NULL;
    }
};

ListNode* removeElements(ListNode* head, int val) {
     ListNode* prev = head;
     ListNode* curr = head->next;
     while(curr != NULL){
         if(curr->val == val){
             curr = curr->next;
             prev->next->next = NULL;
             prev->next = curr;
         }
         curr = curr->next;
         prev = prev->next;
     }    
     return head;
}