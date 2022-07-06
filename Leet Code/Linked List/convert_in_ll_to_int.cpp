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

int getDecimalValue(Node* head){
    if(!head) return 0;
    int ans = 0;
    while(head != NULL){
        ans = 2 * ans + head->data;
        head = head->next;
    }
    return ans;
}