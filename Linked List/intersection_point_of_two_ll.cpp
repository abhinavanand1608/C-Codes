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

int intersectionPoint(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    int c1=0,c2=0;
    while(ptr1){
        c1++;
        ptr1 = ptr1->next;
    }
    while(ptr2){
        c2++;
        ptr2 = ptr2->next;
    }
    ptr1 = head1;
    ptr2 = head2;
    int dif = abs(c1-c2);
    if(c1>c2){
        for(int i=0;i<dif;i++) ptr1 = ptr1->next;
    }
    else if(c2>c1)
        for(int i=0;i<dif;i++) ptr2 = ptr2->next;
    while(ptr1 != ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if(ptr1) return ptr1->data;
    return -1;
}