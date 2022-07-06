#include<bits/stdc++.h>
using namespace std;

int front = -1;
int rear = -1;
int q[10];

void enqueue(int n){
    if(rear == 9){
        cout<<"Over-flow"<<endl;
    }
    else if(front == -1 and rear == -1){
        front++;
        rear++;
        q[rear] = n;
    }
    else{
        rear++;
        q[rear] = n;
    }
}

void dequeue(){
    if(front == -1 and rear == -1)
        cout<<"Under-flow"<<endl;
    else if(front == rear)
        front = rear = -1;
    else{
        int item = q[front];
        front++;
        cout<<item<<endl;
    }
}

void display(){
    for(int i=0;i<rear+1;i++){
        cout<<q[i]<<" ";
    }
}

void peek(){
    if(front == -1 and rear == -1)
        cout<<"Queue is Empty";
    else
        cout<<q[front];
}