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

Node* mergeList(Node* l1, Node* l2){
    Node* p1 = l1;
    Node* p2 = l2;
    Node* dummyNode = new Node(-1);
    Node* p3 = dummyNode;

    while(p1 != NULL and p2 != NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next; 
    }

    while(p1 != NULL){
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while(p2 != NULL){
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return p3;
}

Node* mergeRecursive(Node* l1, Node* l2){
    Node* result;
    if(l1->data < l2->data){
        result = l1;
        result->next = mergeRecursive(l1->next, l2);
    }
    else{
        result = l2;
        result->next = mergeRecursive(l1, l2->next);
    }
    return result;
}