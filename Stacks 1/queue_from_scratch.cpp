#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(q));
}

void enqueue(struct Queue *q, int x){
    if(q->rear == q->size-1)
        printf("Queue is Full\n");
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q){
    int x = -1;
    if(q->front == q->rear)
        printf("Queue is Empty");
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q){
    for(int i=q.front;i<=q.rear;i++)
        printf("%d ", q.Q[i]);
    printf("\n");
}

int main(){
    struct Queue q;
    create(&q, 5);
}