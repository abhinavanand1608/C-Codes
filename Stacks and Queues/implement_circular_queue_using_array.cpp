#include<bits/stdc++.h>
using namespace std;

int front = -1, rear = -1;
int q[5];

void enqueue(int x){
    if(front == -1 and rear == -1)
        cout<<"Queue is empty"<<endl;
    else if((rear+1)%5 == front)
        cout<<"Queue is full"<<endl;
    else{
        rear = (rear+1)%5;
        q[rear] = x;
    }
}

void dequeue(){
    if(front == -1 and rear == -1)
        cout<<"Queue is Empty"<<endl;
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        int num = q[front];
        cout<<num<<endl;
        front = (front+1)%5;
    }
}