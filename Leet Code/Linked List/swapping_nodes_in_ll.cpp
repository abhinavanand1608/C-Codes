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

Node* swapNodes(Node* head, int k){
    Node* node = head;
    Node* val1 = NULL;
    Node* val2 = NULL;
    int temp = 0;
    while(node != NULL){
        temp++;
        node = node->next;
    }
    int sum = temp;
    temp = 0;
    node = head;
    while(node != NULL){
        temp++;
        if(temp == k)
            val1 = node;
        if(temp == sum-k+1)
            val2 = node;
        node = node->next;
    }
    temp = val1->data;
    val1->data = val2->data;
    val2->data = temp;
    return head;
}