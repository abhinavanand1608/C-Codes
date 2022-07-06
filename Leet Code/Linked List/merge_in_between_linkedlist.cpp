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

Node* mergeBetween(Node* list1, int a, int b, Node* list2){
    int lb = 0, ub = 0;
    Node* first = list1;
    Node* last = list1;
    Node* temp = list2;

    while(lb != a-1){
        first = first->next;
        lb++;
    }
    while(ub != b+1){
        last = last->next;
        ub++;
    }

    while(temp->next != NULL)
        temp = temp->next;
    
    first->next = list2;
    temp->next = last;
    return list1;
}