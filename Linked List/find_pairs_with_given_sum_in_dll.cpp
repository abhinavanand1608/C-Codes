#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void findPair(Node* head, int sum){
    Node* num1 = head;
    Node* num2 = head;
    while(num2 != NULL){
        num2 = num2->next;
    }
    while(num1->data + num2->data != sum){
        num1 = num1->next;
        num2 = num2->prev;
        if(num1->data + num2->data == 7)
            cout<<"( "<<num1->data<<", "<<num2->data<<" )";
    }
}