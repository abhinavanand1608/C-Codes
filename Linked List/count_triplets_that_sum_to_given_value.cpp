#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data;
        prev = NULL;
        next = NULL;
    }
};

int countTriplets(Node* head, int sum){
    Node* curr = head;
    int cnt = 0;
    while(curr->next != NULL){
        int remainder = sum - curr->data;
        Node* start = curr->next;
        Node* end = curr->next;
        while(end->next != NULL)
            end = end->next;
        while(start == end or end->next == start){
            if(start->data + end-> data < remainder)
                start = start->next;
            else if(start->data + end->data > remainder)
                end = end->prev;
            else
                cnt++;
        }
        curr = curr->next;
    }
    return cnt;
}