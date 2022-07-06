#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int size;
    int top;
    int *s;
};

void createStack(struct Stack *st){
    printf("Enter Size");
    scanf("%d ", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size*sizeof(int));
}

void Display(struct Stack st){
    int i;
    for(i = st.top;i>=0;i--)
        printf("%d ",st.s[i]);
    printf("\n");
}

void push(struct Stack *st, int x){
    if(st->top == st->size-1)
        printf("Stack Overflow\n");
    else{
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct Stack *st){
    int x = -1;
    if(st->top == -1)
        printf("Stack is Empty");
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(struct Stack st, int index){
    int x = -1;
    if(st.top - index + 1 < 0)
        printf("Invalid Index \n");
    x = st.s[st.top - index + 1];
    return x;
}

int isEmpty(struct Stack st){
    if(st.top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct Stack st){
    if(st.top == st.size-1)
        return 1;
    else
        return 0;
}