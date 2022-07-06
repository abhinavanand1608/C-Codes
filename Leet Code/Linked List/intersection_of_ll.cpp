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

Node* getIntersection(Node* headA, Node* headB){
    int lenA = 0;
    Node* temp = headA;
    while(temp != NULL){
        lenA++;
        temp = temp->next;
    }
    int lenB = 0;
    temp = headB;
    while(temp != NULL){
        lenB++;
        temp = temp->next;
    }
    int len = abs(lenA - lenB);

    if(lenA < lenB){
        while(len--)
            headB = headB->next;
    }

    else if(lenA > lenB){
        while(len--)
            headA = headA->next;
    }

    Node* ans;

    while(headA != NULL){
        if(headA == headB){
            ans = headA;
            break;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return ans;
}